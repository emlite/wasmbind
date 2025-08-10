#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ContactInfo.hpp"
#include "ContactsSelectOptions.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface ContactsManager
/// [`ContactsManager`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager)
class ContactsManager : public emlite::Val {
    explicit ContactsManager(Handle h) noexcept;
public:
    explicit ContactsManager(const emlite::Val &val) noexcept;
    static ContactsManager take_ownership(Handle h) noexcept;
    [[nodiscard]] ContactsManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getProperties method.
    /// [`ContactsManager.getProperties`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/getProperties)
    jsbind::Promise<jsbind::TypedArray<ContactProperty>> getProperties();
    /// The select method.
    /// [`ContactsManager.select`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/select)
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties);
    /// The select method.
    /// [`ContactsManager.select`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/select)
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties, const ContactsSelectOptions& options);
};

} // namespace webbind