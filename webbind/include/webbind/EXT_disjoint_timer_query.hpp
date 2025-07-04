#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLTimerQueryEXT;


class EXT_disjoint_timer_query : public emlite::Val {
    explicit EXT_disjoint_timer_query(Handle h) noexcept;

public:
    explicit EXT_disjoint_timer_query(const emlite::Val &val) noexcept;
    static EXT_disjoint_timer_query take_ownership(Handle h) noexcept;

    EXT_disjoint_timer_query clone() const noexcept;
    WebGLTimerQueryEXT createQueryEXT();
    jsbind::Undefined deleteQueryEXT(const WebGLTimerQueryEXT& query);
    bool isQueryEXT(const WebGLTimerQueryEXT& query);
    jsbind::Undefined beginQueryEXT(const jsbind::Any& target, const WebGLTimerQueryEXT& query);
    jsbind::Undefined endQueryEXT(const jsbind::Any& target);
    jsbind::Undefined queryCounterEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& target);
    jsbind::Any getQueryEXT(const jsbind::Any& target, const jsbind::Any& pname);
    jsbind::Any getQueryObjectEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& pname);
};

