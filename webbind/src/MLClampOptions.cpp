#include <webbind/MLClampOptions.hpp>

using emlite::Val;
namespace webbind {

MLClampOptions::MLClampOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLClampOptions MLClampOptions::take_ownership(Handle h) noexcept {
        return MLClampOptions(h);
    }
MLClampOptions::MLClampOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLClampOptions::MLClampOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLClampOptions MLClampOptions::clone() const noexcept { return *this; }

jsbind::Any MLClampOptions::minValue() const {
    return emlite::Val::get("minValue").as<jsbind::Any>();
}

void MLClampOptions::minValue(const jsbind::Any& value) {
    emlite::Val::set("minValue", value);
}

jsbind::Any MLClampOptions::maxValue() const {
    return emlite::Val::get("maxValue").as<jsbind::Any>();
}

void MLClampOptions::maxValue(const jsbind::Any& value) {
    emlite::Val::set("maxValue", value);
}


} // namespace webbind