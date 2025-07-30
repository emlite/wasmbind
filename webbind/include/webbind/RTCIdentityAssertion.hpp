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
    RTCIdentityAssertion(const jsbind::String& idp, const jsbind::String& name);
    jsbind::String idp() const;
    void idp(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
};

