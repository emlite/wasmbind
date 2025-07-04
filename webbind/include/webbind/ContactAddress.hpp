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
    jsbind::DOMString city() const;
    jsbind::DOMString country() const;
    jsbind::DOMString dependentLocality() const;
    jsbind::DOMString organization() const;
    jsbind::DOMString phone() const;
    jsbind::DOMString postalCode() const;
    jsbind::DOMString recipient() const;
    jsbind::DOMString region() const;
    jsbind::DOMString sortingCode() const;
    jsbind::FrozenArray<jsbind::DOMString> addressLine() const;
};

