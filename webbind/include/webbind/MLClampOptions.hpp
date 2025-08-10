#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLClampOptions
/// [`MLClampOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLClampOptions)
class MLClampOptions : public MLOperatorOptions {
  explicit MLClampOptions(Handle h) noexcept;
public:
    static MLClampOptions take_ownership(Handle h) noexcept;
    explicit MLClampOptions(const emlite::Val &val) noexcept;
    MLClampOptions() noexcept;
    [[nodiscard]] MLClampOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any minValue() const;
    void minValue(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any maxValue() const;
    void maxValue(const jsbind::Any& value);
};

} // namespace webbind