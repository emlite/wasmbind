#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ElementCreationOptions
class ElementCreationOptions : public emlite::Val {
  explicit ElementCreationOptions(Handle h) noexcept;
public:
    static ElementCreationOptions take_ownership(Handle h) noexcept;
    explicit ElementCreationOptions(const emlite::Val &val) noexcept;
    ElementCreationOptions() noexcept;
    [[nodiscard]] ElementCreationOptions clone() const noexcept;
    /// Getter of the `customElementRegistry` attribute.
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    /// Setter of the `customElementRegistry` attribute.
    void customElementRegistry(const CustomElementRegistry& value);
    /// Getter of the `is` attribute.
    [[nodiscard]] jsbind::String is() const;
    /// Setter of the `is` attribute.
    void is(const jsbind::String& value);
};

} // namespace webbind