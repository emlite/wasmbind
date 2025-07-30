#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "enums.hpp"


class SharedWorkerGlobalScope : public WorkerGlobalScope {
    explicit SharedWorkerGlobalScope(Handle h) noexcept;

public:
    explicit SharedWorkerGlobalScope(const emlite::Val &val) noexcept;
    static SharedWorkerGlobalScope take_ownership(Handle h) noexcept;

    SharedWorkerGlobalScope clone() const noexcept;
    jsbind::String name() const;
    jsbind::Undefined close();
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
};

