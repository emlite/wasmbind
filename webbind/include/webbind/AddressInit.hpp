#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AddressInit
/// [`AddressInit`](https://developer.mozilla.org/en-US/docs/Web/API/AddressInit)
class AddressInit : public emlite::Val {
  explicit AddressInit(Handle h) noexcept;
public:
    static AddressInit take_ownership(Handle h) noexcept;
    explicit AddressInit(const emlite::Val &val) noexcept;
    AddressInit() noexcept;
    [[nodiscard]] AddressInit clone() const noexcept;
    [[nodiscard]] jsbind::String country() const;
    void country(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> addressLine() const;
    void addressLine(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String region() const;
    void region(const jsbind::String& value);
    [[nodiscard]] jsbind::String city() const;
    void city(const jsbind::String& value);
    [[nodiscard]] jsbind::String dependentLocality() const;
    void dependentLocality(const jsbind::String& value);
    [[nodiscard]] jsbind::String postalCode() const;
    void postalCode(const jsbind::String& value);
    [[nodiscard]] jsbind::String sortingCode() const;
    void sortingCode(const jsbind::String& value);
    [[nodiscard]] jsbind::String organization() const;
    void organization(const jsbind::String& value);
    [[nodiscard]] jsbind::String recipient() const;
    void recipient(const jsbind::String& value);
    [[nodiscard]] jsbind::String phone() const;
    void phone(const jsbind::String& value);
};

} // namespace webbind