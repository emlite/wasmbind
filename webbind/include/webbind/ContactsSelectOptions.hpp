#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ContactsSelectOptions
/// [`ContactsSelectOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsSelectOptions)
class ContactsSelectOptions : public emlite::Val {
  explicit ContactsSelectOptions(Handle h) noexcept;
public:
    static ContactsSelectOptions take_ownership(Handle h) noexcept;
    explicit ContactsSelectOptions(const emlite::Val &val) noexcept;
    ContactsSelectOptions() noexcept;
    [[nodiscard]] ContactsSelectOptions clone() const noexcept;
    [[nodiscard]] bool multiple() const;
    void multiple(bool value);
};

} // namespace webbind