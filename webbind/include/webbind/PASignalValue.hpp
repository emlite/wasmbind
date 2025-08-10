#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PASignalValue
/// [`PASignalValue`](https://developer.mozilla.org/en-US/docs/Web/API/PASignalValue)
class PASignalValue : public emlite::Val {
  explicit PASignalValue(Handle h) noexcept;
public:
    static PASignalValue take_ownership(Handle h) noexcept;
    explicit PASignalValue(const emlite::Val &val) noexcept;
    PASignalValue() noexcept;
    [[nodiscard]] PASignalValue clone() const noexcept;
    [[nodiscard]] jsbind::String baseValue() const;
    void baseValue(const jsbind::String& value);
    [[nodiscard]] double scale() const;
    void scale(double value);
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
};

} // namespace webbind