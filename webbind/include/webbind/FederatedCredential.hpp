#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


class FederatedCredential : public Credential {
    explicit FederatedCredential(Handle h) noexcept;

public:
    explicit FederatedCredential(const emlite::Val &val) noexcept;
    static FederatedCredential take_ownership(Handle h) noexcept;

    FederatedCredential clone() const noexcept;
    FederatedCredential(const jsbind::Any& data);
    jsbind::String provider() const;
    jsbind::String protocol() const;
    jsbind::String name() const;
    jsbind::String iconURL() const;
};

