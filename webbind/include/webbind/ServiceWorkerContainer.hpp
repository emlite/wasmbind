#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ServiceWorker;
class ServiceWorkerRegistration;
class RegistrationOptions;


class RegistrationOptions : public emlite::Val {
  explicit RegistrationOptions(Handle h) noexcept;
public:
    static RegistrationOptions take_ownership(Handle h) noexcept;
    explicit RegistrationOptions(const emlite::Val &val) noexcept;
    RegistrationOptions() noexcept;
    RegistrationOptions clone() const noexcept;
    jsbind::USVString scope() const;
    void scope(const jsbind::USVString& value);
    WorkerType type() const;
    void type(const WorkerType& value);
    ServiceWorkerUpdateViaCache updateViaCache() const;
    void updateViaCache(const ServiceWorkerUpdateViaCache& value);
};

class ServiceWorkerContainer : public EventTarget {
    explicit ServiceWorkerContainer(Handle h) noexcept;

public:
    explicit ServiceWorkerContainer(const emlite::Val &val) noexcept;
    static ServiceWorkerContainer take_ownership(Handle h) noexcept;

    ServiceWorkerContainer clone() const noexcept;
    ServiceWorker controller() const;
    jsbind::Promise ready() const;
    jsbind::Promise register_(const jsbind::Any& scriptURL, const RegistrationOptions& options);
    jsbind::Promise getRegistration(const jsbind::USVString& clientURL);
    jsbind::Promise getRegistrations();
    jsbind::Undefined startMessages();
    jsbind::Any oncontrollerchange() const;
    void oncontrollerchange(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

