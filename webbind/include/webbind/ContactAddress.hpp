#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ContactAddress class.
/// [`ContactAddress`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress)
class ContactAddress : public emlite::Val {
    explicit ContactAddress(Handle h) noexcept;

public:
    explicit ContactAddress(const emlite::Val &val) noexcept;
    static ContactAddress take_ownership(Handle h) noexcept;

    [[nodiscard]] ContactAddress clone() const noexcept;
    /// The toJSON method.
    /// [`ContactAddress.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `city` attribute.
    /// [`ContactAddress.city`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/city)
    [[nodiscard]] jsbind::String city() const;
    /// Getter of the `country` attribute.
    /// [`ContactAddress.country`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/country)
    [[nodiscard]] jsbind::String country() const;
    /// Getter of the `dependentLocality` attribute.
    /// [`ContactAddress.dependentLocality`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/dependentLocality)
    [[nodiscard]] jsbind::String dependentLocality() const;
    /// Getter of the `organization` attribute.
    /// [`ContactAddress.organization`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/organization)
    [[nodiscard]] jsbind::String organization() const;
    /// Getter of the `phone` attribute.
    /// [`ContactAddress.phone`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/phone)
    [[nodiscard]] jsbind::String phone() const;
    /// Getter of the `postalCode` attribute.
    /// [`ContactAddress.postalCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/postalCode)
    [[nodiscard]] jsbind::String postalCode() const;
    /// Getter of the `recipient` attribute.
    /// [`ContactAddress.recipient`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/recipient)
    [[nodiscard]] jsbind::String recipient() const;
    /// Getter of the `region` attribute.
    /// [`ContactAddress.region`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/region)
    [[nodiscard]] jsbind::String region() const;
    /// Getter of the `sortingCode` attribute.
    /// [`ContactAddress.sortingCode`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/sortingCode)
    [[nodiscard]] jsbind::String sortingCode() const;
    /// Getter of the `addressLine` attribute.
    /// [`ContactAddress.addressLine`](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress/addressLine)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> addressLine() const;
};

