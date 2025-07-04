#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


class DigitalCredential : public Credential {
    explicit DigitalCredential(Handle h) noexcept;

public:
    explicit DigitalCredential(const emlite::Val &val) noexcept;
    static DigitalCredential take_ownership(Handle h) noexcept;

    DigitalCredential clone() const noexcept;
    jsbind::Object toJSON();
    jsbind::DOMString protocol() const;
    jsbind::Object data() const;
    static bool userAgentAllowsProtocol(const jsbind::DOMString& protocol);
};

