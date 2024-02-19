// Generated by rstantools.  Do not edit by hand.

/*
    rmBayes is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    rmBayes is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with rmBayes.  If not, see <http://www.gnu.org/licenses/>.
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
namespace model_HDIstandardHetero_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 37> locations_array__ =
  {" (found before start of program)",
  " (in 'HDIstandardHetero', line 11, column 2 to column 10)",
  " (in 'HDIstandardHetero', line 12, column 2 to column 27)",
  " (in 'HDIstandardHetero', line 13, column 2 to column 19)",
  " (in 'HDIstandardHetero', line 14, column 2 to column 14)",
  " (in 'HDIstandardHetero', line 17, column 2 to column 25)",
  " (in 'HDIstandardHetero', line 36, column 2 to column 24)",
  " (in 'HDIstandardHetero', line 37, column 2 to column 18)",
  " (in 'HDIstandardHetero', line 38, column 2 to column 17)",
  " (in 'HDIstandardHetero', line 18, column 2 to column 25)",
  " (in 'HDIstandardHetero', line 39, column 2 to column 26)",
  " (in 'HDIstandardHetero', line 40, column 2 to column 16)",
  " (in 'HDIstandardHetero', line 41, column 2 to column 30)",
  " (in 'HDIstandardHetero', line 42, column 2 to column 30)",
  " (in 'HDIstandardHetero', line 21, column 2 to column 10)",
  " (in 'HDIstandardHetero', line 22, column 2 to column 10)",
  " (in 'HDIstandardHetero', line 25, column 4 to column 56)",
  " (in 'HDIstandardHetero', line 26, column 4 to column 21)",
  " (in 'HDIstandardHetero', line 24, column 17 to line 27, column 3)",
  " (in 'HDIstandardHetero', line 24, column 2 to line 27, column 3)",
  " (in 'HDIstandardHetero', line 28, column 2 to column 21)",
  " (in 'HDIstandardHetero', line 31, column 2 to column 29)",
  " (in 'HDIstandardHetero', line 32, column 2 to column 36)",
  " (in 'HDIstandardHetero', line 2, column 2 to column 17)",
  " (in 'HDIstandardHetero', line 3, column 2 to column 17)",
  " (in 'HDIstandardHetero', line 4, column 9 to column 10)",
  " (in 'HDIstandardHetero', line 4, column 2 to column 14)",
  " (in 'HDIstandardHetero', line 6, column 8 to column 9)",
  " (in 'HDIstandardHetero', line 6, column 2 to column 17)",
  " (in 'HDIstandardHetero', line 7, column 2 to column 13)",
  " (in 'HDIstandardHetero', line 8, column 2 to column 19)",
  " (in 'HDIstandardHetero', line 12, column 18 to column 19)",
  " (in 'HDIstandardHetero', line 14, column 9 to column 10)",
  " (in 'HDIstandardHetero', line 17, column 18 to column 19)",
  " (in 'HDIstandardHetero', line 36, column 18 to column 19)",
  " (in 'HDIstandardHetero', line 37, column 9 to column 10)",
  " (in 'HDIstandardHetero', line 38, column 9 to column 10)"};
#include <stan_meta_header.hpp>
class model_HDIstandardHetero final : public model_base_crtp<model_HDIstandardHetero> {
private:
  int N;
  int C;
  Eigen::Matrix<double,-1,1> Y_data__;
  std::vector<int> s;
  double tcrit;
  double ht;
  Eigen::Map<Eigen::Matrix<double,-1,1>> Y{nullptr, 0};
public:
  ~model_HDIstandardHetero() {}
  model_HDIstandardHetero(stan::io::var_context& context__, unsigned int
                          random_seed__ = 0, std::ostream*
                          pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_HDIstandardHetero_namespace::model_HDIstandardHetero";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 23;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 23;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 23;
      stan::math::check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 24;
      context__.validate_dims("data initialization", "C", "int",
        std::vector<size_t>{});
      C = std::numeric_limits<int>::min();
      current_statement__ = 24;
      C = context__.vals_i("C")[(1 - 1)];
      current_statement__ = 24;
      stan::math::check_greater_or_equal(function__, "C", C, 2);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      Y_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&Y) Eigen::Map<Eigen::Matrix<double,-1,1>>(Y_data__.data(), N);
      {
        std::vector<local_scalar_t__> Y_flat__;
        current_statement__ = 26;
        Y_flat__ = context__.vals_r("Y");
        current_statement__ = 26;
        pos__ = 1;
        current_statement__ = 26;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 26;
          stan::model::assign(Y, Y_flat__[(pos__ - 1)],
            "assigning variable Y", stan::model::index_uni(sym1__));
          current_statement__ = 26;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 27;
      stan::math::validate_non_negative_index("s", "C", C);
      current_statement__ = 28;
      context__.validate_dims("data initialization", "s", "int",
        std::vector<size_t>{static_cast<size_t>(C)});
      s = std::vector<int>(C, std::numeric_limits<int>::min());
      current_statement__ = 28;
      s = context__.vals_i("s");
      current_statement__ = 29;
      context__.validate_dims("data initialization", "tcrit", "double",
        std::vector<size_t>{});
      tcrit = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 29;
      tcrit = context__.vals_r("tcrit")[(1 - 1)];
      current_statement__ = 30;
      context__.validate_dims("data initialization", "ht", "double",
        std::vector<size_t>{});
      ht = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 30;
      ht = context__.vals_r("ht")[(1 - 1)];
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "ht", ht, 0);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("sigma", "C", C);
      current_statement__ = 32;
      stan::math::validate_non_negative_index("t", "C", C);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("eta", "C", C);
      current_statement__ = 34;
      stan::math::validate_non_negative_index("se", "C", C);
      current_statement__ = 35;
      stan::math::validate_non_negative_index("hdi", "C", C);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("mu_t", "C", C);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + C + 1 + C;
  }
  inline std::string model_name() const final {
    return "model_HDIstandardHetero";
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
    static constexpr const char* function__ =
      "model_HDIstandardHetero_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ mu = DUMMY_VAR__;
      current_statement__ = 1;
      mu = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__,-1,1> sigma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 2;
      sigma = in__.template read_constrain_lb<
                Eigen::Matrix<local_scalar_t__,-1,1>, jacobian__>(0, lp__, C);
      local_scalar_t__ gt = DUMMY_VAR__;
      current_statement__ = 3;
      gt = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
             lp__);
      Eigen::Matrix<local_scalar_t__,-1,1> t =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 4;
      t = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(C);
      Eigen::Matrix<local_scalar_t__,-1,1> eta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 9;
      stan::model::assign(eta,
        stan::math::multiply(sigma, stan::math::sqrt(gt)),
        "assigning variable eta");
      current_statement__ = 5;
      stan::math::check_greater_or_equal(function__, "eta", eta, 0);
      {
        int pos = std::numeric_limits<int>::min();
        current_statement__ = 15;
        pos = 1;
        current_statement__ = 19;
        for (int i = 1; i <= C; ++i) {
          current_statement__ = 16;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::math::segment(Y, pos,
                             stan::model::rvalue(s, "s",
                               stan::model::index_uni(i))), (mu +
                           stan::model::rvalue(t, "t",
                             stan::model::index_uni(i))),
                           stan::model::rvalue(sigma, "sigma",
                             stan::model::index_uni(i))));
          current_statement__ = 17;
          pos = (pos +
            stan::model::rvalue(s, "s", stan::model::index_uni(i)));
        }
        current_statement__ = 20;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(t, 0, eta));
        current_statement__ = 21;
        lp_accum__.add(-stan::math::sum(stan::math::log(sigma)));
        current_statement__ = 22;
        lp_accum__.add(stan::math::scaled_inv_chi_square_lpdf<propto__>(gt,
                         1, ht));
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
      "model_HDIstandardHetero_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double mu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      mu = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double,-1,1> sigma =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      sigma = in__.template read_constrain_lb<
                Eigen::Matrix<local_scalar_t__,-1,1>, jacobian__>(0, lp__, C);
      double gt = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      gt = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
             lp__);
      Eigen::Matrix<double,-1,1> t =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 4;
      t = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(C);
      Eigen::Matrix<double,-1,1> eta =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      out__.write(mu);
      out__.write(sigma);
      out__.write(gt);
      out__.write(t);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      current_statement__ = 9;
      stan::model::assign(eta,
        stan::math::multiply(sigma, stan::math::sqrt(gt)),
        "assigning variable eta");
      current_statement__ = 5;
      stan::math::check_greater_or_equal(function__, "eta", eta, 0);
      if (emit_transformed_parameters__) {
        out__.write(eta);
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,1> se =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,-1> hdi =
        Eigen::Matrix<double,-1,-1>::Constant(C, 2,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> mu_t =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 10;
      stan::model::assign(se,
        stan::math::divide(sigma,
          stan::math::sqrt(
            stan::model::rvalue(s, "s", stan::model::index_uni(1)))),
        "assigning variable se");
      current_statement__ = 11;
      stan::model::assign(mu_t, stan::math::add(mu, t),
        "assigning variable mu_t");
      current_statement__ = 12;
      stan::model::assign(hdi,
        stan::math::subtract(mu_t, stan::math::multiply(tcrit, se)),
        "assigning variable hdi", stan::model::index_omni(),
        stan::model::index_uni(1));
      current_statement__ = 13;
      stan::model::assign(hdi,
        stan::math::add(mu_t, stan::math::multiply(tcrit, se)),
        "assigning variable hdi", stan::model::index_omni(),
        stan::model::index_uni(2));
      current_statement__ = 6;
      stan::math::check_greater_or_equal(function__, "se", se, 0);
      out__.write(se);
      out__.write(hdi);
      out__.write(mu_t);
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
      local_scalar_t__ mu = DUMMY_VAR__;
      current_statement__ = 1;
      mu = in__.read<local_scalar_t__>();
      out__.write(mu);
      Eigen::Matrix<local_scalar_t__,-1,1> sigma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(sigma,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(C),
        "assigning variable sigma");
      out__.write_free_lb(0, sigma);
      local_scalar_t__ gt = DUMMY_VAR__;
      current_statement__ = 3;
      gt = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, gt);
      Eigen::Matrix<local_scalar_t__,-1,1> t =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 4;
      stan::model::assign(t,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(C),
        "assigning variable t");
      out__.write(t);
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
      context__.validate_dims("parameter initialization", "mu", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "sigma", "double",
        std::vector<size_t>{static_cast<size_t>(C)});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "gt", "double",
        std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "t", "double",
        std::vector<size_t>{static_cast<size_t>(C)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ mu = DUMMY_VAR__;
      current_statement__ = 1;
      mu = context__.vals_r("mu")[(1 - 1)];
      out__.write(mu);
      Eigen::Matrix<local_scalar_t__,-1,1> sigma =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> sigma_flat__;
        current_statement__ = 2;
        sigma_flat__ = context__.vals_r("sigma");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 2;
          stan::model::assign(sigma, sigma_flat__[(pos__ - 1)],
            "assigning variable sigma", stan::model::index_uni(sym1__));
          current_statement__ = 2;
          pos__ = (pos__ + 1);
        }
      }
      out__.write_free_lb(0, sigma);
      local_scalar_t__ gt = DUMMY_VAR__;
      current_statement__ = 3;
      gt = context__.vals_r("gt")[(1 - 1)];
      out__.write_free_lb(0, gt);
      Eigen::Matrix<local_scalar_t__,-1,1> t =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> t_flat__;
        current_statement__ = 4;
        t_flat__ = context__.vals_r("t");
        current_statement__ = 4;
        pos__ = 1;
        current_statement__ = 4;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 4;
          stan::model::assign(t, t_flat__[(pos__ - 1)],
            "assigning variable t", stan::model::index_uni(sym1__));
          current_statement__ = 4;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(t);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"mu", "sigma", "gt", "t"};
    if (emit_transformed_parameters__) {
      std::vector<std::string> temp{"eta"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"se", "hdi", "mu_t"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(C)},
                std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(C)}};
    if (emit_transformed_parameters__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(C)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(C)},
             std::vector<size_t>{static_cast<size_t>(C),
               static_cast<size_t>(2)},
             std::vector<size_t>{static_cast<size_t>(C)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "mu");
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "sigma" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "gt");
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "t" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "eta" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "se" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= C; ++sym2__) {
          param_names__.emplace_back(std::string() + "hdi" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "mu_t" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "mu");
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "sigma" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "gt");
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "t" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "eta" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "se" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= C; ++sym2__) {
          param_names__.emplace_back(std::string() + "hdi" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        param_names__.emplace_back(std::string() + "mu_t" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"gt\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"t\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"eta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"transformed_parameters\"},{\"name\":\"se\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"},{\"name\":\"hdi\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(C) + ",\"cols\":" + std::to_string(2) + "},\"block\":\"generated_quantities\"},{\"name\":\"mu_t\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"gt\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"t\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"eta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"transformed_parameters\"},{\"name\":\"se\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"},{\"name\":\"hdi\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(C) + ",\"cols\":" + std::to_string(2) + "},\"block\":\"generated_quantities\"},{\"name\":\"mu_t\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((1 + C) + 1) + C);
    const size_t num_transformed = emit_transformed_parameters * (C);
    const size_t num_gen_quantities = emit_generated_quantities * (((C + (C *
      2)) + C));
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
    const size_t num_params__ = (((1 + C) + 1) + C);
    const size_t num_transformed = emit_transformed_parameters * (C);
    const size_t num_gen_quantities = emit_generated_quantities * (((C + (C *
      2)) + C));
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
using stan_model = model_HDIstandardHetero_namespace::model_HDIstandardHetero;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_HDIstandardHetero_namespace::profiles__;
}
#endif
#endif
