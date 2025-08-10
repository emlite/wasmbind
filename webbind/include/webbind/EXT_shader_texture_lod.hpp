#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface EXT_shader_texture_lod
/// [`EXT_shader_texture_lod`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_shader_texture_lod)
class EXT_shader_texture_lod : public emlite::Val {
    explicit EXT_shader_texture_lod(Handle h) noexcept;
public:
    explicit EXT_shader_texture_lod(const emlite::Val &val) noexcept;
    static EXT_shader_texture_lod take_ownership(Handle h) noexcept;
    [[nodiscard]] EXT_shader_texture_lod clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind