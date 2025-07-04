#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


class PasswordCredential : public Credential {
    explicit PasswordCredential(Handle h) noexcept;

public:
    explicit PasswordCredential(const emlite::Val &val) noexcept;
    static PasswordCredential take_ownership(Handle h) noexcept;

    PasswordCredential clone() const noexcept;
    PasswordCredential(const jsbind::Any& data);
    jsbind::USVString password() const;
    jsbind::USVString name() const;
    jsbind::USVString iconURL() const;
};

