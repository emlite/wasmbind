#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ContactsSelectOptions
class ContactsSelectOptions : public emlite::Val {
  explicit ContactsSelectOptions(Handle h) noexcept;
public:
    static ContactsSelectOptions take_ownership(Handle h) noexcept;
    explicit ContactsSelectOptions(const emlite::Val &val) noexcept;
    ContactsSelectOptions() noexcept;
    [[nodiscard]] ContactsSelectOptions clone() const noexcept;
    /// Getter of the `multiple` attribute.
    [[nodiscard]] bool multiple() const;
    /// Setter of the `multiple` attribute.
    void multiple(bool value);
};

} // namespace webbind