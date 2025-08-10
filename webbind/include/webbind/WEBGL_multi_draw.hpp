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
    jsbind::Undefined multiDrawArraysWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& drawcount);
    /// The multiDrawElementsWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawElementsWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawElementsWEBGL)
    jsbind::Undefined multiDrawElementsWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& drawcount);
    /// The multiDrawArraysInstancedWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawArraysInstancedWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawArraysInstancedWEBGL)
    jsbind::Undefined multiDrawArraysInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount);
    /// The multiDrawElementsInstancedWEBGL method.
    /// [`WEBGL_multi_draw.multiDrawElementsInstancedWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw/multiDrawElementsInstancedWEBGL)
    jsbind::Undefined multiDrawElementsInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount);
};

} // namespace webbind