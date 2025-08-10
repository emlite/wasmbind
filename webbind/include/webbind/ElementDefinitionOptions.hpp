#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ElementDefinitionOptions
class ElementDefinitionOptions : public emlite::Val {
  explicit ElementDefinitionOptions(Handle h) noexcept;
public:
    static ElementDefinitionOptions take_ownership(Handle h) noexcept;
    explicit ElementDefinitionOptions(const emlite::Val &val) noexcept;
    ElementDefinitionOptions() noexcept;
    [[nodiscard]] ElementDefinitionOptions clone() const noexcept;
    /// Getter of the `extends` attribute.
    [[nodiscard]] jsbind::String extends() const;
    /// Setter of the `extends` attribute.
    void extends(const jsbind::String& value);
};

} // namespace webbind