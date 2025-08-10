#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FunctionParameter
/// [`FunctionParameter`](https://developer.mozilla.org/en-US/docs/Web/API/FunctionParameter)
class FunctionParameter : public emlite::Val {
  explicit FunctionParameter(Handle h) noexcept;
public:
    static FunctionParameter take_ownership(Handle h) noexcept;
    explicit FunctionParameter(const emlite::Val &val) noexcept;
    FunctionParameter() noexcept;
    [[nodiscard]] FunctionParameter clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::String defaultValue() const;
    void defaultValue(const jsbind::String& value);
};

} // namespace webbind