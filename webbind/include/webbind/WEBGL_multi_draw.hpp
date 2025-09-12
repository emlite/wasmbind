#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_multi_draw
/// [`WEBGL_multi_draw`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw)
class WEBGL_multi_draw : public emlite::Val {
    explicit WEBGL_multi_draw(Handle h) noexcept;
public:
    explicit WEBGL_multi_draw(const emlite::Val &val) noexcept;
    static WEBGL_multi_draw take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_multi_draw clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The multiDrawArraysWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawArraysWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawArraysWEBGL)
    jsbind::Undefined multiDrawArraysWEBGL(const uint32_t& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, int drawcount);
    /// The multiDrawElementsWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawElementsWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawElementsWEBGL)
    jsbind::Undefined multiDrawElementsWEBGL(const uint32_t& mode, const jsbind::Any& countsList, long long countsOffset, const uint32_t& type, const jsbind::Any& offsetsList, long long offsetsOffset, int drawcount);
    /// The multiDrawArraysInstancedWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawArraysInstancedWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawArraysInstancedWEBGL)
    jsbind::Undefined multiDrawArraysInstancedWEBGL(const uint32_t& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, int drawcount);
    /// The multiDrawElementsInstancedWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawElementsInstancedWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawElementsInstancedWEBGL)
    jsbind::Undefined multiDrawElementsInstancedWEBGL(const uint32_t& mode, const jsbind::Any& countsList, long long countsOffset, const uint32_t& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, int drawcount);
};

} // namespace webbind