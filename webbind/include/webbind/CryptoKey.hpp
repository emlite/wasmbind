#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CryptoKey : public emlite::Val {
    explicit CryptoKey(Handle h) noexcept;

public:
    explicit CryptoKey(const emlite::Val &val) noexcept;
    static CryptoKey take_ownership(Handle h) noexcept;

    CryptoKey clone() const noexcept;
    KeyType type() const;
    bool extractable() const;
    jsbind::Object algorithm() const;
    jsbind::Object usages() const;
};

