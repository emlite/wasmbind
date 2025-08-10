#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AddressInit
class AddressInit : public emlite::Val {
  explicit AddressInit(Handle h) noexcept;
public:
    static AddressInit take_ownership(Handle h) noexcept;
    explicit AddressInit(const emlite::Val &val) noexcept;
    AddressInit() noexcept;
    [[nodiscard]] AddressInit clone() const noexcept;
    /// Getter of the `country` attribute.
    [[nodiscard]] jsbind::String country() const;
    /// Setter of the `country` attribute.
    void country(const jsbind::String& value);
    /// Getter of the `addressLine` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> addressLine() const;
    /// Setter of the `addressLine` attribute.
    void addressLine(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `region` attribute.
    [[nodiscard]] jsbind::String region() const;
    /// Setter of the `region` attribute.
    void region(const jsbind::String& value);
    /// Getter of the `city` attribute.
    [[nodiscard]] jsbind::String city() const;
    /// Setter of the `city` attribute.
    void city(const jsbind::String& value);
    /// Getter of the `dependentLocality` attribute.
    [[nodiscard]] jsbind::String dependentLocality() const;
    /// Setter of the `dependentLocality` attribute.
    void dependentLocality(const jsbind::String& value);
    /// Getter of the `postalCode` attribute.
    [[nodiscard]] jsbind::String postalCode() const;
    /// Setter of the `postalCode` attribute.
    void postalCode(const jsbind::String& value);
    /// Getter of the `sortingCode` attribute.
    [[nodiscard]] jsbind::String sortingCode() const;
    /// Setter of the `sortingCode` attribute.
    void sortingCode(const jsbind::String& value);
    /// Getter of the `organization` attribute.
    [[nodiscard]] jsbind::String organization() const;
    /// Setter of the `organization` attribute.
    void organization(const jsbind::String& value);
    /// Getter of the `recipient` attribute.
    [[nodiscard]] jsbind::String recipient() const;
    /// Setter of the `recipient` attribute.
    void recipient(const jsbind::String& value);
    /// Getter of the `phone` attribute.
    [[nodiscard]] jsbind::String phone() const;
    /// Setter of the `phone` attribute.
    void phone(const jsbind::String& value);
};

} // namespace webbind