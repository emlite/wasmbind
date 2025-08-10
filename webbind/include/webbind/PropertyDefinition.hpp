#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PropertyDefinition
class PropertyDefinition : public emlite::Val {
  explicit PropertyDefinition(Handle h) noexcept;
public:
    static PropertyDefinition take_ownership(Handle h) noexcept;
    explicit PropertyDefinition(const emlite::Val &val) noexcept;
    PropertyDefinition() noexcept;
    [[nodiscard]] PropertyDefinition clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `syntax` attribute.
    [[nodiscard]] jsbind::String syntax() const;
    /// Setter of the `syntax` attribute.
    void syntax(const jsbind::String& value);
    /// Getter of the `inherits` attribute.
    [[nodiscard]] bool inherits() const;
    /// Setter of the `inherits` attribute.
    void inherits(bool value);
    /// Getter of the `initialValue` attribute.
    [[nodiscard]] jsbind::String initialValue() const;
    /// Setter of the `initialValue` attribute.
    void initialValue(const jsbind::String& value);
};

} // namespace webbind