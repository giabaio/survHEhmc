// Generated by rstantools.  Do not edit by hand.

/*
    survHEhmc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    survHEhmc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with survHEhmc.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.21.0
#include <stan/model/model_header.hpp>
namespace model_GenGamma_namespace {
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;
static int current_statement_begin__;
stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_GenGamma");
    reader.add_event(83, 81, "end", "model_GenGamma");
    return reader;
}
template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
gen_gamma_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                   const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                   const T2__& sigma,
                   const T3__& Q, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 11;
        validate_non_negative_index("prob", "num_elements(x)", num_elements(x));
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> prob(num_elements(x));
        stan::math::initialize(prob, DUMMY_VAR__);
        stan::math::fill(prob, DUMMY_VAR__);
        current_statement_begin__ = 12;
        local_scalar_t__ lprob(DUMMY_VAR__);
        (void) lprob;  // dummy to suppress unused var warning
        stan::math::initialize(lprob, DUMMY_VAR__);
        stan::math::fill(lprob, DUMMY_VAR__);
        current_statement_begin__ = 13;
        validate_non_negative_index("w", "num_elements(x)", num_elements(x));
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> w(num_elements(x));
        stan::math::initialize(w, DUMMY_VAR__);
        stan::math::fill(w, DUMMY_VAR__);
        current_statement_begin__ = 15;
        stan::math::assign(w, divide(subtract(stan::math::log(x), mu), sigma));
        current_statement_begin__ = 16;
        for (int i = 1; i <= num_elements(x); ++i) {
            current_statement_begin__ = 17;
            stan::model::assign(prob, 
                        stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                        ((((-(stan::math::log((sigma * get_base1(x, i, "x", 1)))) + stan::math::log(stan::math::fabs(Q))) + (pow(Q, -(2)) * stan::math::log(pow(Q, -(2))))) + (pow(Q, -(2)) * ((Q * get_base1(w, i, "w", 1)) - stan::math::exp((Q * get_base1(w, i, "w", 1)))))) - stan::math::lgamma(pow(Q, -(2)))), 
                        "assigning variable prob");
        }
        current_statement_begin__ = 20;
        stan::math::assign(lprob, sum(prob));
        current_statement_begin__ = 21;
        return stan::math::promote_scalar<fun_return_scalar_t__>(lprob);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
template <typename T0__, typename T1__, typename T2__, typename T3__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
gen_gamma_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                   const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                   const T2__& sigma,
                   const T3__& Q, std::ostream* pstream__) {
    return gen_gamma_lpdf<false>(x,mu,sigma,Q, pstream__);
}
struct gen_gamma_lpdf_functor__ {
    template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
    operator()(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                   const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                   const T2__& sigma,
                   const T3__& Q, std::ostream* pstream__) const {
        return gen_gamma_lpdf(x, mu, sigma, Q, pstream__);
    }
};
template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
gen_gamma_cens_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                        const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                        const T2__& sigma,
                        const T3__& Q,
                        const Eigen::Matrix<T4__, Eigen::Dynamic, 1>& u, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 26;
        validate_non_negative_index("prob", "num_elements(x)", num_elements(x));
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> prob(num_elements(x));
        stan::math::initialize(prob, DUMMY_VAR__);
        stan::math::fill(prob, DUMMY_VAR__);
        current_statement_begin__ = 27;
        local_scalar_t__ lprob(DUMMY_VAR__);
        (void) lprob;  // dummy to suppress unused var warning
        stan::math::initialize(lprob, DUMMY_VAR__);
        stan::math::fill(lprob, DUMMY_VAR__);
        current_statement_begin__ = 28;
        validate_non_negative_index("w", "num_elements(x)", num_elements(x));
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> w(num_elements(x));
        stan::math::initialize(w, DUMMY_VAR__);
        stan::math::fill(w, DUMMY_VAR__);
        current_statement_begin__ = 29;
        validate_non_negative_index("tr", "num_elements(x)", num_elements(x));
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> tr(num_elements(x));
        stan::math::initialize(tr, DUMMY_VAR__);
        stan::math::fill(tr, DUMMY_VAR__);
        current_statement_begin__ = 31;
        stan::math::assign(tr, elt_multiply(x, u));
        current_statement_begin__ = 32;
        stan::math::assign(w, divide(subtract(stan::math::log(tr), mu), sigma));
        current_statement_begin__ = 33;
        for (int i = 1; i <= num_elements(x); ++i) {
            current_statement_begin__ = 34;
            stan::model::assign(prob, 
                        stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                        (((((stan::math::log(get_base1(u, i, "u", 1)) - stan::math::log((sigma * get_base1(tr, i, "tr", 1)))) + stan::math::log(stan::math::fabs(Q))) + (pow(Q, -(2)) * stan::math::log(pow(Q, -(2))))) + (pow(Q, -(2)) * ((Q * get_base1(w, i, "w", 1)) - stan::math::exp((Q * get_base1(w, i, "w", 1)))))) - stan::math::lgamma(pow(Q, -(2)))), 
                        "assigning variable prob");
        }
        current_statement_begin__ = 37;
        stan::math::assign(lprob, sum(prob));
        current_statement_begin__ = 38;
        return stan::math::promote_scalar<fun_return_scalar_t__>(lprob);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
template <typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
gen_gamma_cens_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                        const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                        const T2__& sigma,
                        const T3__& Q,
                        const Eigen::Matrix<T4__, Eigen::Dynamic, 1>& u, std::ostream* pstream__) {
    return gen_gamma_cens_lpdf<false>(x,mu,sigma,Q,u, pstream__);
}
struct gen_gamma_cens_lpdf_functor__ {
    template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
    operator()(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& x,
                        const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& mu,
                        const T2__& sigma,
                        const T3__& Q,
                        const Eigen::Matrix<T4__, Eigen::Dynamic, 1>& u, std::ostream* pstream__) const {
        return gen_gamma_cens_lpdf(x, mu, sigma, Q, u, pstream__);
    }
};
#include <stan_meta_header.hpp>
class model_GenGamma
  : public stan::model::model_base_crtp<model_GenGamma> {
private:
        int n_obs;
        int n_cens;
        vector_d t;
        vector_d d;
        int H;
        matrix_d X_obs;
        matrix_d X_cens;
        vector_d mu_beta;
        vector_d sigma_beta;
        double mu_Q;
        double sigma_Q;
        double a_sigma;
        double b_sigma;
public:
    model_GenGamma(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }
    model_GenGamma(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }
    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning
        current_statement_begin__ = -1;
        static const char* function__ = "model_GenGamma_namespace::model_GenGamma";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        try {
            // initialize data block variables from context__
            current_statement_begin__ = 43;
            context__.validate_dims("data initialization", "n_obs", "int", context__.to_vec());
            n_obs = int(0);
            vals_i__ = context__.vals_i("n_obs");
            pos__ = 0;
            n_obs = vals_i__[pos__++];
            check_greater_or_equal(function__, "n_obs", n_obs, 1);
            current_statement_begin__ = 44;
            context__.validate_dims("data initialization", "n_cens", "int", context__.to_vec());
            n_cens = int(0);
            vals_i__ = context__.vals_i("n_cens");
            pos__ = 0;
            n_cens = vals_i__[pos__++];
            check_greater_or_equal(function__, "n_cens", n_cens, 0);
            current_statement_begin__ = 45;
            validate_non_negative_index("t", "n_obs", n_obs);
            context__.validate_dims("data initialization", "t", "vector_d", context__.to_vec(n_obs));
            t = Eigen::Matrix<double, Eigen::Dynamic, 1>(n_obs);
            vals_r__ = context__.vals_r("t");
            pos__ = 0;
            size_t t_j_1_max__ = n_obs;
            for (size_t j_1__ = 0; j_1__ < t_j_1_max__; ++j_1__) {
                t(j_1__) = vals_r__[pos__++];
            }
            check_greater_or_equal(function__, "t", t, 0);
            current_statement_begin__ = 46;
            validate_non_negative_index("d", "n_cens", n_cens);
            context__.validate_dims("data initialization", "d", "vector_d", context__.to_vec(n_cens));
            d = Eigen::Matrix<double, Eigen::Dynamic, 1>(n_cens);
            vals_r__ = context__.vals_r("d");
            pos__ = 0;
            size_t d_j_1_max__ = n_cens;
            for (size_t j_1__ = 0; j_1__ < d_j_1_max__; ++j_1__) {
                d(j_1__) = vals_r__[pos__++];
            }
            check_greater_or_equal(function__, "d", d, 0);
            current_statement_begin__ = 47;
            context__.validate_dims("data initialization", "H", "int", context__.to_vec());
            H = int(0);
            vals_i__ = context__.vals_i("H");
            pos__ = 0;
            H = vals_i__[pos__++];
            check_greater_or_equal(function__, "H", H, 1);
            current_statement_begin__ = 48;
            validate_non_negative_index("X_obs", "n_obs", n_obs);
            validate_non_negative_index("X_obs", "H", H);
            context__.validate_dims("data initialization", "X_obs", "matrix_d", context__.to_vec(n_obs,H));
            X_obs = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(n_obs, H);
            vals_r__ = context__.vals_r("X_obs");
            pos__ = 0;
            size_t X_obs_j_2_max__ = H;
            size_t X_obs_j_1_max__ = n_obs;
            for (size_t j_2__ = 0; j_2__ < X_obs_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < X_obs_j_1_max__; ++j_1__) {
                    X_obs(j_1__, j_2__) = vals_r__[pos__++];
                }
            }
            current_statement_begin__ = 49;
            validate_non_negative_index("X_cens", "n_cens", n_cens);
            validate_non_negative_index("X_cens", "H", H);
            context__.validate_dims("data initialization", "X_cens", "matrix_d", context__.to_vec(n_cens,H));
            X_cens = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(n_cens, H);
            vals_r__ = context__.vals_r("X_cens");
            pos__ = 0;
            size_t X_cens_j_2_max__ = H;
            size_t X_cens_j_1_max__ = n_cens;
            for (size_t j_2__ = 0; j_2__ < X_cens_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < X_cens_j_1_max__; ++j_1__) {
                    X_cens(j_1__, j_2__) = vals_r__[pos__++];
                }
            }
            current_statement_begin__ = 50;
            validate_non_negative_index("mu_beta", "H", H);
            context__.validate_dims("data initialization", "mu_beta", "vector_d", context__.to_vec(H));
            mu_beta = Eigen::Matrix<double, Eigen::Dynamic, 1>(H);
            vals_r__ = context__.vals_r("mu_beta");
            pos__ = 0;
            size_t mu_beta_j_1_max__ = H;
            for (size_t j_1__ = 0; j_1__ < mu_beta_j_1_max__; ++j_1__) {
                mu_beta(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 51;
            validate_non_negative_index("sigma_beta", "H", H);
            context__.validate_dims("data initialization", "sigma_beta", "vector_d", context__.to_vec(H));
            sigma_beta = Eigen::Matrix<double, Eigen::Dynamic, 1>(H);
            vals_r__ = context__.vals_r("sigma_beta");
            pos__ = 0;
            size_t sigma_beta_j_1_max__ = H;
            for (size_t j_1__ = 0; j_1__ < sigma_beta_j_1_max__; ++j_1__) {
                sigma_beta(j_1__) = vals_r__[pos__++];
            }
            check_greater_or_equal(function__, "sigma_beta", sigma_beta, 0);
            current_statement_begin__ = 52;
            context__.validate_dims("data initialization", "mu_Q", "double", context__.to_vec());
            mu_Q = double(0);
            vals_r__ = context__.vals_r("mu_Q");
            pos__ = 0;
            mu_Q = vals_r__[pos__++];
            current_statement_begin__ = 53;
            context__.validate_dims("data initialization", "sigma_Q", "double", context__.to_vec());
            sigma_Q = double(0);
            vals_r__ = context__.vals_r("sigma_Q");
            pos__ = 0;
            sigma_Q = vals_r__[pos__++];
            check_greater_or_equal(function__, "sigma_Q", sigma_Q, 0);
            current_statement_begin__ = 54;
            context__.validate_dims("data initialization", "a_sigma", "double", context__.to_vec());
            a_sigma = double(0);
            vals_r__ = context__.vals_r("a_sigma");
            pos__ = 0;
            a_sigma = vals_r__[pos__++];
            check_greater_or_equal(function__, "a_sigma", a_sigma, 0);
            current_statement_begin__ = 55;
            context__.validate_dims("data initialization", "b_sigma", "double", context__.to_vec());
            b_sigma = double(0);
            vals_r__ = context__.vals_r("b_sigma");
            pos__ = 0;
            b_sigma = vals_r__[pos__++];
            check_greater_or_equal(function__, "b_sigma", b_sigma, 0);
            // initialize transformed data variables
            // execute transformed data statements
            // validate transformed data
            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 59;
            num_params_r__ += 1;
            current_statement_begin__ = 60;
            num_params_r__ += 1;
            current_statement_begin__ = 61;
            validate_non_negative_index("beta", "H", H);
            num_params_r__ += H;
            current_statement_begin__ = 62;
            validate_non_negative_index("cens", "n_cens", n_cens);
            num_params_r__ += n_cens;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    ~model_GenGamma() { }
    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;
        current_statement_begin__ = 59;
        if (!(context__.contains_r("Q")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable Q missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("Q");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "Q", "double", context__.to_vec());
        double Q(0);
        Q = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(Q);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable Q: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 60;
        if (!(context__.contains_r("sigma")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable sigma missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("sigma");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "sigma", "double", context__.to_vec());
        double sigma(0);
        sigma = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0, sigma);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable sigma: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 61;
        if (!(context__.contains_r("beta")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable beta missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("beta");
        pos__ = 0U;
        validate_non_negative_index("beta", "H", H);
        context__.validate_dims("parameter initialization", "beta", "vector_d", context__.to_vec(H));
        Eigen::Matrix<double, Eigen::Dynamic, 1> beta(H);
        size_t beta_j_1_max__ = H;
        for (size_t j_1__ = 0; j_1__ < beta_j_1_max__; ++j_1__) {
            beta(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_unconstrain(beta);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable beta: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 62;
        if (!(context__.contains_r("cens")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable cens missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("cens");
        pos__ = 0U;
        validate_non_negative_index("cens", "n_cens", n_cens);
        context__.validate_dims("parameter initialization", "cens", "vector_d", context__.to_vec(n_cens));
        Eigen::Matrix<double, Eigen::Dynamic, 1> cens(n_cens);
        size_t cens_j_1_max__ = n_cens;
        for (size_t j_1__ = 0; j_1__ < cens_j_1_max__; ++j_1__) {
            cens(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_lb_unconstrain(1, cens);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable cens: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }
    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }
    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {
        typedef T__ local_scalar_t__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning
        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
            // model parameters
            current_statement_begin__ = 59;
            local_scalar_t__ Q;
            (void) Q;  // dummy to suppress unused var warning
            if (jacobian__)
                Q = in__.scalar_constrain(lp__);
            else
                Q = in__.scalar_constrain();
            current_statement_begin__ = 60;
            local_scalar_t__ sigma;
            (void) sigma;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma = in__.scalar_lb_constrain(0, lp__);
            else
                sigma = in__.scalar_lb_constrain(0);
            current_statement_begin__ = 61;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> beta;
            (void) beta;  // dummy to suppress unused var warning
            if (jacobian__)
                beta = in__.vector_constrain(H, lp__);
            else
                beta = in__.vector_constrain(H);
            current_statement_begin__ = 62;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> cens;
            (void) cens;  // dummy to suppress unused var warning
            if (jacobian__)
                cens = in__.vector_lb_constrain(1, n_cens, lp__);
            else
                cens = in__.vector_lb_constrain(1, n_cens);
            // model body
            current_statement_begin__ = 67;
            lp_accum__.add(normal_log<propto__>(Q, mu_Q, sigma_Q));
            current_statement_begin__ = 68;
            lp_accum__.add(gamma_log<propto__>(sigma, a_sigma, b_sigma));
            current_statement_begin__ = 69;
            lp_accum__.add(normal_log<propto__>(beta, mu_beta, sigma_beta));
            current_statement_begin__ = 72;
            if (as_bool(logical_gt(n_cens, 0))) {
                current_statement_begin__ = 73;
                lp_accum__.add(gen_gamma_cens_lpdf<propto__>(cens, multiply(X_cens, beta), sigma, Q, d, pstream__));
            }
            current_statement_begin__ = 75;
            lp_accum__.add(gen_gamma_lpdf<propto__>(t, multiply(X_obs, beta), sigma, Q, pstream__));
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
        lp_accum__.add(lp__);
        return lp_accum__.sum();
    } // log_prob()
    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }
    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("Q");
        names__.push_back("sigma");
        names__.push_back("beta");
        names__.push_back("cens");
        names__.push_back("mu");
    }
    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(H);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n_cens);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
    }
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;
        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_GenGamma_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double Q = in__.scalar_constrain();
        vars__.push_back(Q);
        double sigma = in__.scalar_lb_constrain(0);
        vars__.push_back(sigma);
        Eigen::Matrix<double, Eigen::Dynamic, 1> beta = in__.vector_constrain(H);
        size_t beta_j_1_max__ = H;
        for (size_t j_1__ = 0; j_1__ < beta_j_1_max__; ++j_1__) {
            vars__.push_back(beta(j_1__));
        }
        Eigen::Matrix<double, Eigen::Dynamic, 1> cens = in__.vector_lb_constrain(1, n_cens);
        size_t cens_j_1_max__ = n_cens;
        for (size_t j_1__ = 0; j_1__ < cens_j_1_max__; ++j_1__) {
            vars__.push_back(cens(j_1__));
        }
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        if (!include_tparams__ && !include_gqs__) return;
        try {
            if (!include_gqs__ && !include_tparams__) return;
            if (!include_gqs__) return;
            // declare and define generated quantities
            current_statement_begin__ = 79;
            double mu;
            (void) mu;  // dummy to suppress unused var warning
            stan::math::initialize(mu, DUMMY_VAR__);
            stan::math::fill(mu, DUMMY_VAR__);
            // generated quantities statements
            current_statement_begin__ = 80;
            stan::math::assign(mu, get_base1(beta, 1, "beta", 1));
            // validate, write generated quantities
            current_statement_begin__ = 79;
            vars__.push_back(mu);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }
    std::string model_name() const {
        return "model_GenGamma";
    }
    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "Q";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());
        size_t beta_j_1_max__ = H;
        for (size_t j_1__ = 0; j_1__ < beta_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "beta" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        size_t cens_j_1_max__ = n_cens;
        for (size_t j_1__ = 0; j_1__ < cens_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "cens" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
    }
    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "Q";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());
        size_t beta_j_1_max__ = H;
        for (size_t j_1__ = 0; j_1__ < beta_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "beta" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        size_t cens_j_1_max__ = n_cens;
        for (size_t j_1__ = 0; j_1__ < cens_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "cens" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
    }
}; // model
}  // namespace
typedef model_GenGamma_namespace::model_GenGamma stan_model;
#ifndef USING_R
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
#endif
#endif