#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ContactAddress : public emlite::Val {
    explicit ContactAddress(Handle h) noexcept;

public:
    explicit ContactAddress(const emlite::Val &val) noexcept;
    static ContactAddress take_ownership(Handle h) noexcept;

    ContactAddress clone() const noexcept;
    jsbind::Object toJSON();
    jsbind::String city() const;
    jsbind::String country() const;
    jsbind::String dependentLocality() const;
    jsbind::String organization() const;
    jsbind::String phone() const;
    jsbind::String postalCode() const;
    jsbind::String recipient() const;
    jsbind::String region() const;
    jsbind::String sortingCode() const;
    jsbind::TypedArray<jsbind::String> addressLine() const;
};

