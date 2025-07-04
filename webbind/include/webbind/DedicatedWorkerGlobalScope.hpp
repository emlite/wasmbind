#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


class DedicatedWorkerGlobalScope : public WorkerGlobalScope {
    explicit DedicatedWorkerGlobalScope(Handle h) noexcept;

public:
    explicit DedicatedWorkerGlobalScope(const emlite::Val &val) noexcept;
    static DedicatedWorkerGlobalScope take_ownership(Handle h) noexcept;

    DedicatedWorkerGlobalScope clone() const noexcept;
    jsbind::DOMString name() const;
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Undefined close();
    jsbind::Any onrtctransform() const;
    void onrtctransform(const jsbind::Any& value);
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

