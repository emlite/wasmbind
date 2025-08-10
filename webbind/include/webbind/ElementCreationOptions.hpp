#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ElementCreationOptions
/// [`ElementCreationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ElementCreationOptions)
class ElementCreationOptions : public emlite::Val {
  explicit ElementCreationOptions(Handle h) noexcept;
public:
    static ElementCreationOptions take_ownership(Handle h) noexcept;
    explicit ElementCreationOptions(const emlite::Val &val) noexcept;
    ElementCreationOptions() noexcept;
    [[nodiscard]] ElementCreationOptions clone() const noexcept;
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    void customElementRegistry(const CustomElementRegistry& value);
    [[nodiscard]] jsbind::String is() const;
    void is(const jsbind::String& value);
};

} // namespace webbind