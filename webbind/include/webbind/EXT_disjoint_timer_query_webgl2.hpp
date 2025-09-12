#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebGLQuery;

/// Interface EXT_disjoint_timer_query_webgl2
/// [`EXT_disjoint_timer_query_webgl2`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query_webgl2)
class EXT_disjoint_timer_query_webgl2 : public emlite::Val {
    explicit EXT_disjoint_timer_query_webgl2(Handle h) noexcept;
public:
    explicit EXT_disjoint_timer_query_webgl2(const emlite::Val &val) noexcept;
    static EXT_disjoint_timer_query_webgl2 take_ownership(Handle h) noexcept;
    [[nodiscard]] EXT_disjoint_timer_query_webgl2 clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The queryCounterEXT method.
    /// [`EXT_disjoint_timer_query_webgl2.queryCounterEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query_webgl2/queryCounterEXT)
    jsbind::Undefined queryCounterEXT(const WebGLQuery& query, const uint32_t& target);
};

} // namespace webbind