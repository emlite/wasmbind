#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SubtleCrypto;


class Crypto : public emlite::Val {
    explicit Crypto(Handle h) noexcept;

public:
    explicit Crypto(const emlite::Val &val) noexcept;
    static Crypto take_ownership(Handle h) noexcept;

    Crypto clone() const noexcept;
    SubtleCrypto subtle() const;
    jsbind::Any getRandomValues(const jsbind::Any& array);
    jsbind::String randomUUID();
};

