#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class RTCIdentityAssertion : public emlite::Val {
    explicit RTCIdentityAssertion(Handle h) noexcept;

public:
    explicit RTCIdentityAssertion(const emlite::Val &val) noexcept;
    static RTCIdentityAssertion take_ownership(Handle h) noexcept;

    RTCIdentityAssertion clone() const noexcept;
    RTCIdentityAssertion(const jsbind::DOMString& idp, const jsbind::DOMString& name);
    jsbind::DOMString idp() const;
    void idp(const jsbind::DOMString& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
};

