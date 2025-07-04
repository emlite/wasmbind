#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_texture_compression_rgtc : public emlite::Val {
    explicit EXT_texture_compression_rgtc(Handle h) noexcept;

public:
    explicit EXT_texture_compression_rgtc(const emlite::Val &val) noexcept;
    static EXT_texture_compression_rgtc take_ownership(Handle h) noexcept;

    EXT_texture_compression_rgtc clone() const noexcept;
};

