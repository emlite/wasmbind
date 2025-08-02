#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The EXT_texture_compression_rgtc class.
/// [`EXT_texture_compression_rgtc`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_texture_compression_rgtc)
class EXT_texture_compression_rgtc : public emlite::Val {
    explicit EXT_texture_compression_rgtc(Handle h) noexcept;

public:
    explicit EXT_texture_compression_rgtc(const emlite::Val &val) noexcept;
    static EXT_texture_compression_rgtc take_ownership(Handle h) noexcept;

    [[nodiscard]] EXT_texture_compression_rgtc clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

