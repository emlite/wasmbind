#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLClampOptions
class MLClampOptions : public MLOperatorOptions {
  explicit MLClampOptions(Handle h) noexcept;
public:
    static MLClampOptions take_ownership(Handle h) noexcept;
    explicit MLClampOptions(const emlite::Val &val) noexcept;
    MLClampOptions() noexcept;
    [[nodiscard]] MLClampOptions clone() const noexcept;
    /// Getter of the `minValue` attribute.
    [[nodiscard]] jsbind::Any minValue() const;
    /// Setter of the `minValue` attribute.
    void minValue(const jsbind::Any& value);
    /// Getter of the `maxValue` attribute.
    [[nodiscard]] jsbind::Any maxValue() const;
    /// Setter of the `maxValue` attribute.
    void maxValue(const jsbind::Any& value);
};

} // namespace webbind