#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_texture_compression_bptc : public emlite::Val {
    explicit EXT_texture_compression_bptc(Handle h) noexcept;

public:
    explicit EXT_texture_compression_bptc(const emlite::Val &val) noexcept;
    static EXT_texture_compression_bptc take_ownership(Handle h) noexcept;

    EXT_texture_compression_bptc clone() const noexcept;
};

