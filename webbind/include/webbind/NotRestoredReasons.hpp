#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NotRestoredReasonDetails;
class NotRestoredReasons;


class NotRestoredReasons : public emlite::Val {
    explicit NotRestoredReasons(Handle h) noexcept;

public:
    explicit NotRestoredReasons(const emlite::Val &val) noexcept;
    static NotRestoredReasons take_ownership(Handle h) noexcept;

    NotRestoredReasons clone() const noexcept;
    jsbind::USVString src() const;
    jsbind::DOMString id() const;
    jsbind::DOMString name() const;
    jsbind::USVString url() const;
    jsbind::FrozenArray<NotRestoredReasonDetails> reasons() const;
    jsbind::FrozenArray<NotRestoredReasons> children() const;
    jsbind::Object toJSON();
};

