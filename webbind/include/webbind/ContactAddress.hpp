#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ContactAddress
/// [`ContactAddress`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress)
class ContactAddress : public emlite::Val {
    explicit ContactAddress(Handle h) noexcept;
public:
    explicit ContactAddress(const emlite::Val &val) noexcept;
    static ContactAddress take_ownership(Handle h) noexcept;
    [[nodiscard]] ContactAddress clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`ContactAddress.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/toJSON)
    jsbind::Object toJSON();
    /// [`ContactAddress.city`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/city)
    /// [`ContactAddress.city`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/city)
    [[nodiscard]] jsbind::String city() const;
    /// [`ContactAddress.country`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/country)
    /// [`ContactAddress.country`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/country)
    [[nodiscard]] jsbind::String country() const;
    /// [`ContactAddress.dependentLocality`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/dependentLocality)
    /// [`ContactAddress.dependentLocality`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/dependentLocality)
    [[nodiscard]] jsbind::String dependentLocality() const;
    /// [`ContactAddress.organization`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/organization)
    /// [`ContactAddress.organization`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/organization)
    [[nodiscard]] jsbind::String organization() const;
    /// [`ContactAddress.phone`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/phone)
    /// [`ContactAddress.phone`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/phone)
    [[nodiscard]] jsbind::String phone() const;
    /// [`ContactAddress.postalCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/postalCode)
    /// [`ContactAddress.postalCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/postalCode)
    [[nodiscard]] jsbind::String postalCode() const;
    /// [`ContactAddress.recipient`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/recipient)
    /// [`ContactAddress.recipient`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/recipient)
    [[nodiscard]] jsbind::String recipient() const;
    /// [`ContactAddress.region`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/region)
    /// [`ContactAddress.region`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/region)
    [[nodiscard]] jsbind::String region() const;
    /// [`ContactAddress.sortingCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/sortingCode)
    /// [`ContactAddress.sortingCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/sortingCode)
    [[nodiscard]] jsbind::String sortingCode() const;
    /// [`ContactAddress.addressLine`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/addressLine)
    /// [`ContactAddress.addressLine`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/addressLine)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> addressLine() const;
};

} // namespace webbind