#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ElementDefinitionOptions
/// [`ElementDefinitionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ElementDefinitionOptions)
class ElementDefinitionOptions : public emlite::Val {
  explicit ElementDefinitionOptions(Handle h) noexcept;
public:
    static ElementDefinitionOptions take_ownership(Handle h) noexcept;
    explicit ElementDefinitionOptions(const emlite::Val &val) noexcept;
    ElementDefinitionOptions() noexcept;
    [[nodiscard]] ElementDefinitionOptions clone() const noexcept;
    [[nodiscard]] jsbind::String extends() const;
    void extends(const jsbind::String& value);
};

} // namespace webbind