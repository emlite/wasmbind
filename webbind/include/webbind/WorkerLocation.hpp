#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WorkerLocation : public emlite::Val {
    explicit WorkerLocation(Handle h) noexcept;

public:
    explicit WorkerLocation(const emlite::Val &val) noexcept;
    static WorkerLocation take_ownership(Handle h) noexcept;

    WorkerLocation clone() const noexcept;
    jsbind::String href() const;
    jsbind::String origin() const;
    jsbind::String protocol() const;
    jsbind::String host() const;
    jsbind::String hostname() const;
    jsbind::String port() const;
    jsbind::String pathname() const;
    jsbind::String search() const;
    jsbind::String hash() const;
};

