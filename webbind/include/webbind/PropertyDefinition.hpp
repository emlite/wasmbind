#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PropertyDefinition
/// [`PropertyDefinition`](https://developer.mozilla.org/en-US/docs/Web/API/PropertyDefinition)
class PropertyDefinition : public emlite::Val {
  explicit PropertyDefinition(Handle h) noexcept;
public:
    static PropertyDefinition take_ownership(Handle h) noexcept;
    explicit PropertyDefinition(const emlite::Val &val) noexcept;
    PropertyDefinition() noexcept;
    [[nodiscard]] PropertyDefinition clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String syntax() const;
    void syntax(const jsbind::String& value);
    [[nodiscard]] bool inherits() const;
    void inherits(bool value);
    [[nodiscard]] jsbind::String initialValue() const;
    void initialValue(const jsbind::String& value);
};

} // namespace webbind