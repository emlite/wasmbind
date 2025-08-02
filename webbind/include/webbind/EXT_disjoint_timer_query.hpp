#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLTimerQueryEXT;


/// The EXT_disjoint_timer_query class.
/// [`EXT_disjoint_timer_query`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query)
class EXT_disjoint_timer_query : public emlite::Val {
    explicit EXT_disjoint_timer_query(Handle h) noexcept;

public:
    explicit EXT_disjoint_timer_query(const emlite::Val &val) noexcept;
    static EXT_disjoint_timer_query take_ownership(Handle h) noexcept;

    [[nodiscard]] EXT_disjoint_timer_query clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createQueryEXT method.
    /// [`EXT_disjoint_timer_query.createQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/createQueryEXT)
    WebGLTimerQueryEXT createQueryEXT();
    /// The deleteQueryEXT method.
    /// [`EXT_disjoint_timer_query.deleteQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/deleteQueryEXT)
    jsbind::Undefined deleteQueryEXT(const WebGLTimerQueryEXT& query);
    /// The isQueryEXT method.
    /// [`EXT_disjoint_timer_query.isQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/isQueryEXT)
    bool isQueryEXT(const WebGLTimerQueryEXT& query);
    /// The beginQueryEXT method.
    /// [`EXT_disjoint_timer_query.beginQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/beginQueryEXT)
    jsbind::Undefined beginQueryEXT(const jsbind::Any& target, const WebGLTimerQueryEXT& query);
    /// The endQueryEXT method.
    /// [`EXT_disjoint_timer_query.endQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/endQueryEXT)
    jsbind::Undefined endQueryEXT(const jsbind::Any& target);
    /// The queryCounterEXT method.
    /// [`EXT_disjoint_timer_query.queryCounterEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/queryCounterEXT)
    jsbind::Undefined queryCounterEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& target);
    /// The getQueryEXT method.
    /// [`EXT_disjoint_timer_query.getQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/getQueryEXT)
    jsbind::Any getQueryEXT(const jsbind::Any& target, const jsbind::Any& pname);
    /// The getQueryObjectEXT method.
    /// [`EXT_disjoint_timer_query.getQueryObjectEXT`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query/getQueryObjectEXT)
    jsbind::Any getQueryObjectEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& pname);
};

