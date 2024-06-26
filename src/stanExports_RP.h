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
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model_RP_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 45> locations_array__ =
  {" (found before start of program)",
  " (in 'RP', line 37, column 2 to column 20)",
  " (in 'RP', line 38, column 2 to column 17)",
  " (in 'RP', line 42, column 2 to column 39)",
  " (in 'RP', line 43, column 2 to column 36)",
  " (in 'RP', line 46, column 2 to column 31)",
  " (in 'RP', line 23, column 2 to column 17)",
  " (in 'RP', line 24, column 2 to column 17)",
  " (in 'RP', line 25, column 2 to column 17)",
  " (in 'RP', line 26, column 18 to column 19)",
  " (in 'RP', line 26, column 2 to column 23)",
  " (in 'RP', line 27, column 26 to column 27)",
  " (in 'RP', line 27, column 2 to column 31)",
  " (in 'RP', line 28, column 9 to column 10)",
  " (in 'RP', line 28, column 11 to column 12)",
  " (in 'RP', line 28, column 2 to column 16)",
  " (in 'RP', line 29, column 9 to column 10)",
  " (in 'RP', line 29, column 11 to column 14)",
  " (in 'RP', line 29, column 2 to column 18)",
  " (in 'RP', line 30, column 9 to column 10)",
  " (in 'RP', line 30, column 11 to column 14)",
  " (in 'RP', line 30, column 2 to column 19)",
  " (in 'RP', line 31, column 9 to column 10)",
  " (in 'RP', line 31, column 2 to column 20)",
  " (in 'RP', line 32, column 19 to column 20)",
  " (in 'RP', line 32, column 2 to column 33)",
  " (in 'RP', line 33, column 9 to column 12)",
  " (in 'RP', line 33, column 2 to column 23)",
  " (in 'RP', line 34, column 18 to column 21)",
  " (in 'RP', line 34, column 2 to column 35)",
  " (in 'RP', line 37, column 9 to column 12)",
  " (in 'RP', line 38, column 9 to column 10)",
  " (in 'RP', line 10, column 11 to column 26)",
  " (in 'RP', line 10, column 4 to column 32)",
  " (in 'RP', line 11, column 11 to column 26)",
  " (in 'RP', line 11, column 4 to column 38)",
  " (in 'RP', line 12, column 11 to column 26)",
  " (in 'RP', line 12, column 4 to column 36)",
  " (in 'RP', line 13, column 4 to column 15)",
  " (in 'RP', line 15, column 4 to column 28)",
  " (in 'RP', line 16, column 4 to column 25)",
  " (in 'RP', line 17, column 4 to column 63)",
  " (in 'RP', line 18, column 4 to column 25)",
  " (in 'RP', line 19, column 4 to column 17)",
  " (in 'RP', line 3, column 87 to line 20, column 3)"};
template <bool propto__, typename T0__, typename T1__, typename T2__,
          typename T3__, typename T4__, typename T5__,
          stan::require_all_t<stan::is_col_vector<T0__>,
                              stan::is_vt_not_complex<T0__>,
                              stan::is_col_vector<T1__>,
                              stan::is_vt_not_complex<T1__>,
                              stan::is_col_vector<T2__>,
                              stan::is_vt_not_complex<T2__>,
                              stan::is_eigen_matrix_dynamic<T3__>,
                              stan::is_vt_not_complex<T3__>,
                              stan::is_eigen_matrix_dynamic<T4__>,
                              stan::is_vt_not_complex<T4__>,
                              stan::is_col_vector<T5__>,
                              stan::is_vt_not_complex<T5__>>* = nullptr>
stan::promote_args_t<stan::base_type_t<T0__>, stan::base_type_t<T1__>,
  stan::base_type_t<T2__>, stan::base_type_t<T3__>, stan::base_type_t<T4__>,
  stan::promote_args_t<stan::base_type_t<T5__>>>
rps_lpdf(const T0__& t_arg__, const T1__& d_arg__, const T2__& gamma_arg__,
         const T3__& B_arg__, const T4__& DB_arg__, const T5__&
         linpred_arg__, std::ostream* pstream__);
template <bool propto__, typename T0__, typename T1__, typename T2__,
          typename T3__, typename T4__, typename T5__,
          stan::require_all_t<stan::is_col_vector<T0__>,
                              stan::is_vt_not_complex<T0__>,
                              stan::is_col_vector<T1__>,
                              stan::is_vt_not_complex<T1__>,
                              stan::is_col_vector<T2__>,
                              stan::is_vt_not_complex<T2__>,
                              stan::is_eigen_matrix_dynamic<T3__>,
                              stan::is_vt_not_complex<T3__>,
                              stan::is_eigen_matrix_dynamic<T4__>,
                              stan::is_vt_not_complex<T4__>,
                              stan::is_col_vector<T5__>,
                              stan::is_vt_not_complex<T5__>>*>
stan::promote_args_t<stan::base_type_t<T0__>, stan::base_type_t<T1__>,
  stan::base_type_t<T2__>, stan::base_type_t<T3__>, stan::base_type_t<T4__>,
  stan::promote_args_t<stan::base_type_t<T5__>>>
rps_lpdf(const T0__& t_arg__, const T1__& d_arg__, const T2__& gamma_arg__,
         const T3__& B_arg__, const T4__& DB_arg__, const T5__&
         linpred_arg__, std::ostream* pstream__) {
  using local_scalar_t__ = stan::promote_args_t<stan::base_type_t<T0__>,
                             stan::base_type_t<T1__>,
                             stan::base_type_t<T2__>,
                             stan::base_type_t<T3__>,
                             stan::base_type_t<T4__>,
                             stan::promote_args_t<stan::base_type_t<T5__>>>;
  int current_statement__ = 0;
  const auto& t = stan::math::to_ref(t_arg__);
  const auto& d = stan::math::to_ref(d_arg__);
  const auto& gamma = stan::math::to_ref(gamma_arg__);
  const auto& B = stan::math::to_ref(B_arg__);
  const auto& DB = stan::math::to_ref(DB_arg__);
  const auto& linpred = stan::math::to_ref(linpred_arg__);
  local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
  // suppress unused var warning
  (void) DUMMY_VAR__;
  try {
    current_statement__ = 32;
    stan::math::validate_non_negative_index("eta", "num_elements(t)",
      stan::math::num_elements(t));
    Eigen::Matrix<local_scalar_t__,-1,1> eta =
      Eigen::Matrix<local_scalar_t__,-1,1>::Constant(stan::math::num_elements(
                                                       t), DUMMY_VAR__);
    current_statement__ = 34;
    stan::math::validate_non_negative_index("eta_prime", "num_elements(t)",
      stan::math::num_elements(t));
    Eigen::Matrix<local_scalar_t__,-1,1> eta_prime =
      Eigen::Matrix<local_scalar_t__,-1,1>::Constant(stan::math::num_elements(
                                                       t), DUMMY_VAR__);
    current_statement__ = 36;
    stan::math::validate_non_negative_index("log_lik", "num_elements(t)",
      stan::math::num_elements(t));
    Eigen::Matrix<local_scalar_t__,-1,1> log_lik =
      Eigen::Matrix<local_scalar_t__,-1,1>::Constant(stan::math::num_elements(
                                                       t), DUMMY_VAR__);
    local_scalar_t__ lprob = DUMMY_VAR__;
    current_statement__ = 39;
    stan::model::assign(eta,
      stan::math::add(stan::math::multiply(B, gamma), linpred),
      "assigning variable eta");
    current_statement__ = 40;
    stan::model::assign(eta_prime, stan::math::multiply(DB, gamma),
      "assigning variable eta_prime");
    current_statement__ = 41;
    stan::model::assign(log_lik,
      stan::math::subtract(
        stan::math::elt_multiply(d,
          stan::math::add(
            stan::math::add(stan::math::minus(stan::math::log(t)),
              stan::math::log(eta_prime)), eta)), stan::math::exp(eta)),
      "assigning variable log_lik");
    current_statement__ = 42;
    lprob = stan::math::sum(log_lik);
    current_statement__ = 43;
    return lprob;
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, locations_array__[current_statement__]);
  }
}
#include <stan_meta_header.hpp>
class model_RP final : public model_base_crtp<model_RP> {
private:
  int n;
  int M;
  int H;
  Eigen::Matrix<double,-1,1> t_data__;
  Eigen::Matrix<double,-1,1> d_data__;
  Eigen::Matrix<double,-1,-1> X_data__;
  Eigen::Matrix<double,-1,-1> B_data__;
  Eigen::Matrix<double,-1,-1> DB_data__;
  Eigen::Matrix<double,-1,1> mu_beta_data__;
  Eigen::Matrix<double,-1,1> sigma_beta_data__;
  Eigen::Matrix<double,-1,1> mu_gamma_data__;
  Eigen::Matrix<double,-1,1> sigma_gamma_data__;
  int gamma_1dim__;
  Eigen::Map<Eigen::Matrix<double,-1,1>> t{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> d{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,-1>> X{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double,-1,-1>> B{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double,-1,-1>> DB{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> mu_beta{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> sigma_beta{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> mu_gamma{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> sigma_gamma{nullptr, 0};
public:
  ~model_RP() {}
  model_RP(stan::io::var_context& context__, unsigned int random_seed__ = 0,
           std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ = "model_RP_namespace::model_RP";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 6;
      context__.validate_dims("data initialization", "n", "int",
        std::vector<size_t>{});
      n = std::numeric_limits<int>::min();
      current_statement__ = 6;
      n = context__.vals_i("n")[(1 - 1)];
      current_statement__ = 6;
      stan::math::check_greater_or_equal(function__, "n", n, 1);
      current_statement__ = 7;
      context__.validate_dims("data initialization", "M", "int",
        std::vector<size_t>{});
      M = std::numeric_limits<int>::min();
      current_statement__ = 7;
      M = context__.vals_i("M")[(1 - 1)];
      current_statement__ = 7;
      stan::math::check_greater_or_equal(function__, "M", M, 0);
      current_statement__ = 8;
      context__.validate_dims("data initialization", "H", "int",
        std::vector<size_t>{});
      H = std::numeric_limits<int>::min();
      current_statement__ = 8;
      H = context__.vals_i("H")[(1 - 1)];
      current_statement__ = 8;
      stan::math::check_greater_or_equal(function__, "H", H, 1);
      current_statement__ = 9;
      stan::math::validate_non_negative_index("t", "n", n);
      current_statement__ = 10;
      context__.validate_dims("data initialization", "t", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      t_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                   std::numeric_limits<double>::quiet_NaN());
      new (&t) Eigen::Map<Eigen::Matrix<double,-1,1>>(t_data__.data(), n);
      {
        std::vector<local_scalar_t__> t_flat__;
        current_statement__ = 10;
        t_flat__ = context__.vals_r("t");
        current_statement__ = 10;
        pos__ = 1;
        current_statement__ = 10;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 10;
          stan::model::assign(t, t_flat__[(pos__ - 1)],
            "assigning variable t", stan::model::index_uni(sym1__));
          current_statement__ = 10;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 10;
      stan::math::check_greater_or_equal(function__, "t", t, 0);
      current_statement__ = 11;
      stan::math::validate_non_negative_index("d", "n", n);
      current_statement__ = 12;
      context__.validate_dims("data initialization", "d", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      d_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                   std::numeric_limits<double>::quiet_NaN());
      new (&d) Eigen::Map<Eigen::Matrix<double,-1,1>>(d_data__.data(), n);
      {
        std::vector<local_scalar_t__> d_flat__;
        current_statement__ = 12;
        d_flat__ = context__.vals_r("d");
        current_statement__ = 12;
        pos__ = 1;
        current_statement__ = 12;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 12;
          stan::model::assign(d, d_flat__[(pos__ - 1)],
            "assigning variable d", stan::model::index_uni(sym1__));
          current_statement__ = 12;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 12;
      stan::math::check_greater_or_equal(function__, "d", d, 0);
      current_statement__ = 12;
      stan::math::check_less_or_equal(function__, "d", d, 1);
      current_statement__ = 13;
      stan::math::validate_non_negative_index("X", "n", n);
      current_statement__ = 14;
      stan::math::validate_non_negative_index("X", "H", H);
      current_statement__ = 15;
      context__.validate_dims("data initialization", "X", "double",
        std::vector<size_t>{static_cast<size_t>(n), static_cast<size_t>(H)});
      X_data__ = Eigen::Matrix<double,-1,-1>::Constant(n, H,
                   std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double,-1,-1>>(X_data__.data(), n, H);
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 15;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 15;
        pos__ = 1;
        current_statement__ = 15;
        for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
          current_statement__ = 15;
          for (int sym2__ = 1; sym2__ <= n; ++sym2__) {
            current_statement__ = 15;
            stan::model::assign(X, X_flat__[(pos__ - 1)],
              "assigning variable X", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 15;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 16;
      stan::math::validate_non_negative_index("B", "n", n);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("B", "M + 2", (M + 2));
      current_statement__ = 18;
      context__.validate_dims("data initialization", "B", "double",
        std::vector<size_t>{static_cast<size_t>(n),
          static_cast<size_t>((M + 2))});
      B_data__ = Eigen::Matrix<double,-1,-1>::Constant(n, (M + 2),
                   std::numeric_limits<double>::quiet_NaN());
      new (&B) Eigen::Map<Eigen::Matrix<double,-1,-1>>(B_data__.data(), n, (M
        + 2));
      {
        std::vector<local_scalar_t__> B_flat__;
        current_statement__ = 18;
        B_flat__ = context__.vals_r("B");
        current_statement__ = 18;
        pos__ = 1;
        current_statement__ = 18;
        for (int sym1__ = 1; sym1__ <= (M + 2); ++sym1__) {
          current_statement__ = 18;
          for (int sym2__ = 1; sym2__ <= n; ++sym2__) {
            current_statement__ = 18;
            stan::model::assign(B, B_flat__[(pos__ - 1)],
              "assigning variable B", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 18;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 19;
      stan::math::validate_non_negative_index("DB", "n", n);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("DB", "M + 2", (M + 2));
      current_statement__ = 21;
      context__.validate_dims("data initialization", "DB", "double",
        std::vector<size_t>{static_cast<size_t>(n),
          static_cast<size_t>((M + 2))});
      DB_data__ = Eigen::Matrix<double,-1,-1>::Constant(n, (M + 2),
                    std::numeric_limits<double>::quiet_NaN());
      new (&DB) Eigen::Map<Eigen::Matrix<double,-1,-1>>(DB_data__.data(), n,
        (M + 2));
      {
        std::vector<local_scalar_t__> DB_flat__;
        current_statement__ = 21;
        DB_flat__ = context__.vals_r("DB");
        current_statement__ = 21;
        pos__ = 1;
        current_statement__ = 21;
        for (int sym1__ = 1; sym1__ <= (M + 2); ++sym1__) {
          current_statement__ = 21;
          for (int sym2__ = 1; sym2__ <= n; ++sym2__) {
            current_statement__ = 21;
            stan::model::assign(DB, DB_flat__[(pos__ - 1)],
              "assigning variable DB", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 21;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 22;
      stan::math::validate_non_negative_index("mu_beta", "H", H);
      current_statement__ = 23;
      context__.validate_dims("data initialization", "mu_beta", "double",
        std::vector<size_t>{static_cast<size_t>(H)});
      mu_beta_data__ = Eigen::Matrix<double,-1,1>::Constant(H,
                         std::numeric_limits<double>::quiet_NaN());
      new (&mu_beta)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(mu_beta_data__.data(), H);
      {
        std::vector<local_scalar_t__> mu_beta_flat__;
        current_statement__ = 23;
        mu_beta_flat__ = context__.vals_r("mu_beta");
        current_statement__ = 23;
        pos__ = 1;
        current_statement__ = 23;
        for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
          current_statement__ = 23;
          stan::model::assign(mu_beta, mu_beta_flat__[(pos__ - 1)],
            "assigning variable mu_beta", stan::model::index_uni(sym1__));
          current_statement__ = 23;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 24;
      stan::math::validate_non_negative_index("sigma_beta", "H", H);
      current_statement__ = 25;
      context__.validate_dims("data initialization", "sigma_beta", "double",
        std::vector<size_t>{static_cast<size_t>(H)});
      sigma_beta_data__ = Eigen::Matrix<double,-1,1>::Constant(H,
                            std::numeric_limits<double>::quiet_NaN());
      new (&sigma_beta)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(sigma_beta_data__.data(), H);
      {
        std::vector<local_scalar_t__> sigma_beta_flat__;
        current_statement__ = 25;
        sigma_beta_flat__ = context__.vals_r("sigma_beta");
        current_statement__ = 25;
        pos__ = 1;
        current_statement__ = 25;
        for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
          current_statement__ = 25;
          stan::model::assign(sigma_beta, sigma_beta_flat__[(pos__ - 1)],
            "assigning variable sigma_beta", stan::model::index_uni(sym1__));
          current_statement__ = 25;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 25;
      stan::math::check_greater_or_equal(function__, "sigma_beta",
        sigma_beta, 0);
      current_statement__ = 26;
      stan::math::validate_non_negative_index("mu_gamma", "M + 2", (M + 2));
      current_statement__ = 27;
      context__.validate_dims("data initialization", "mu_gamma", "double",
        std::vector<size_t>{static_cast<size_t>((M + 2))});
      mu_gamma_data__ = Eigen::Matrix<double,-1,1>::Constant((M + 2),
                          std::numeric_limits<double>::quiet_NaN());
      new (&mu_gamma)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(mu_gamma_data__.data(), (M +
        2));
      {
        std::vector<local_scalar_t__> mu_gamma_flat__;
        current_statement__ = 27;
        mu_gamma_flat__ = context__.vals_r("mu_gamma");
        current_statement__ = 27;
        pos__ = 1;
        current_statement__ = 27;
        for (int sym1__ = 1; sym1__ <= (M + 2); ++sym1__) {
          current_statement__ = 27;
          stan::model::assign(mu_gamma, mu_gamma_flat__[(pos__ - 1)],
            "assigning variable mu_gamma", stan::model::index_uni(sym1__));
          current_statement__ = 27;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 28;
      stan::math::validate_non_negative_index("sigma_gamma", "M + 2", (M + 2));
      current_statement__ = 29;
      context__.validate_dims("data initialization", "sigma_gamma", "double",
        std::vector<size_t>{static_cast<size_t>((M + 2))});
      sigma_gamma_data__ = Eigen::Matrix<double,-1,1>::Constant((M + 2),
                             std::numeric_limits<double>::quiet_NaN());
      new (&sigma_gamma)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(sigma_gamma_data__.data(), (M
        + 2));
      {
        std::vector<local_scalar_t__> sigma_gamma_flat__;
        current_statement__ = 29;
        sigma_gamma_flat__ = context__.vals_r("sigma_gamma");
        current_statement__ = 29;
        pos__ = 1;
        current_statement__ = 29;
        for (int sym1__ = 1; sym1__ <= (M + 2); ++sym1__) {
          current_statement__ = 29;
          stan::model::assign(sigma_gamma, sigma_gamma_flat__[(pos__ - 1)],
            "assigning variable sigma_gamma", stan::model::index_uni(sym1__));
          current_statement__ = 29;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 29;
      stan::math::check_greater_or_equal(function__, "sigma_gamma",
        sigma_gamma, 0);
      current_statement__ = 30;
      gamma_1dim__ = std::numeric_limits<int>::min();
      current_statement__ = 30;
      gamma_1dim__ = (M + 2);
      current_statement__ = 30;
      stan::math::validate_non_negative_index("gamma", "M + 2", gamma_1dim__);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("beta", "H", H);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = gamma_1dim__ + H;
  }
  inline std::string model_name() const final {
    return "model_RP";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --allow-undefined"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ = "model_RP_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<local_scalar_t__,-1,1> gamma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(gamma_1dim__,
          DUMMY_VAR__);
      current_statement__ = 1;
      gamma = in__.template read<
                Eigen::Matrix<local_scalar_t__,-1,1>>(gamma_1dim__);
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(H, DUMMY_VAR__);
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(H);
      {
        current_statement__ = 3;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(gamma, mu_gamma,
                         sigma_gamma));
        current_statement__ = 4;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta, mu_beta,
                         sigma_beta));
        current_statement__ = 5;
        lp_accum__.add(rps_lpdf<propto__>(t, d, gamma, B, DB,
                         stan::math::multiply(X, beta), pstream__));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_RP_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<double,-1,1> gamma =
        Eigen::Matrix<double,-1,1>::Constant(gamma_1dim__,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      gamma = in__.template read<
                Eigen::Matrix<local_scalar_t__,-1,1>>(gamma_1dim__);
      Eigen::Matrix<double,-1,1> beta =
        Eigen::Matrix<double,-1,1>::Constant(H,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(H);
      out__.write(gamma);
      out__.write(beta);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__,-1,1> gamma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(gamma_1dim__,
          DUMMY_VAR__);
      current_statement__ = 1;
      stan::model::assign(gamma,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(gamma_1dim__),
        "assigning variable gamma");
      out__.write(gamma);
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(H, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(beta,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(H),
        "assigning variable beta");
      out__.write(beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "gamma", "double",
        std::vector<size_t>{static_cast<size_t>(gamma_1dim__)});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "beta", "double",
        std::vector<size_t>{static_cast<size_t>(H)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__,-1,1> gamma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(gamma_1dim__,
          DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> gamma_flat__;
        current_statement__ = 1;
        gamma_flat__ = context__.vals_r("gamma");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= gamma_1dim__; ++sym1__) {
          current_statement__ = 1;
          stan::model::assign(gamma, gamma_flat__[(pos__ - 1)],
            "assigning variable gamma", stan::model::index_uni(sym1__));
          current_statement__ = 1;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(gamma);
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(H, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> beta_flat__;
        current_statement__ = 2;
        beta_flat__ = context__.vals_r("beta");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
          current_statement__ = 2;
          stan::model::assign(beta, beta_flat__[(pos__ - 1)],
            "assigning variable beta", stan::model::index_uni(sym1__));
          current_statement__ = 2;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"gamma", "beta"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(
                                                                    gamma_1dim__)},
                std::vector<size_t>{static_cast<size_t>(H)}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= gamma_1dim__; ++sym1__) {
      param_names__.emplace_back(std::string() + "gamma" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
      param_names__.emplace_back(std::string() + "beta" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= gamma_1dim__; ++sym1__) {
      param_names__.emplace_back(std::string() + "gamma" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= H; ++sym1__) {
      param_names__.emplace_back(std::string() + "beta" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"gamma\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(gamma_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(H) + "},\"block\":\"parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"gamma\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(gamma_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(H) + "},\"block\":\"parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (gamma_1dim__ + H);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (gamma_1dim__ + H);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_RP_namespace::model_RP;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_RP_namespace::profiles__;
}
#endif
#endif
