#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MessagePort;


class SharedWorker : public EventTarget {
    explicit SharedWorker(Handle h) noexcept;

public:
    explicit SharedWorker(const emlite::Val &val) noexcept;
    static SharedWorker take_ownership(Handle h) noexcept;

    SharedWorker clone() const noexcept;
    SharedWorker(const jsbind::Any& scriptURL);
    SharedWorker(const jsbind::Any& scriptURL, const jsbind::Any& options);
    jsbind::Any port() const;
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

