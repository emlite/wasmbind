#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FunctionParameter
class FunctionParameter : public emlite::Val {
  explicit FunctionParameter(Handle h) noexcept;
public:
    static FunctionParameter take_ownership(Handle h) noexcept;
    explicit FunctionParameter(const emlite::Val &val) noexcept;
    FunctionParameter() noexcept;
    [[nodiscard]] FunctionParameter clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `defaultValue` attribute.
    [[nodiscard]] jsbind::String defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    void defaultValue(const jsbind::String& value);
};

} // namespace webbind