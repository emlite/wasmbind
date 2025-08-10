#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "RegistrationOptions.hpp"

namespace webbind {

class ServiceWorker;
class ServiceWorkerRegistration;

/// Interface ServiceWorkerContainer
/// [`ServiceWorkerContainer`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer)
class ServiceWorkerContainer : public EventTarget {
    explicit ServiceWorkerContainer(Handle h) noexcept;
public:
    explicit ServiceWorkerContainer(const emlite::Val &val) noexcept;
    static ServiceWorkerContainer take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerContainer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `controller` attribute.
    /// [`ServiceWorkerContainer.controller`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/controller)
    [[nodiscard]] ServiceWorker controller() const;
    /// Getter of the `ready` attribute.
    /// [`ServiceWorkerContainer.ready`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/ready)
    [[nodiscard]] jsbind::Promise<ServiceWorkerRegistration> ready() const;
    /// The register method.
    /// [`ServiceWorkerContainer.register`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/register)
    jsbind::Promise<ServiceWorkerRegistration> register_(const jsbind::Any& scriptURL);
    /// The register method.
    /// [`ServiceWorkerContainer.register`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/register)
    jsbind::Promise<ServiceWorkerRegistration> register_(const jsbind::Any& scriptURL, const RegistrationOptions& options);
    /// The getRegistration method.
    /// [`ServiceWorkerContainer.getRegistration`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/getRegistration)
    jsbind::Promise<jsbind::Any> getRegistration();
    /// The getRegistration method.
    /// [`ServiceWorkerContainer.getRegistration`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/getRegistration)
    jsbind::Promise<jsbind::Any> getRegistration(const jsbind::String& clientURL);
    /// The getRegistrations method.
    /// [`ServiceWorkerContainer.getRegistrations`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/getRegistrations)
    jsbind::Promise<jsbind::TypedArray<ServiceWorkerRegistration>> getRegistrations();
    /// The startMessages method.
    /// [`ServiceWorkerContainer.startMessages`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/startMessages)
    jsbind::Undefined startMessages();
    /// Getter of the `oncontrollerchange` attribute.
    /// [`ServiceWorkerContainer.oncontrollerchange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/oncontrollerchange)
    [[nodiscard]] jsbind::Any oncontrollerchange() const;
    /// Setter of the `oncontrollerchange` attribute.
    /// [`ServiceWorkerContainer.oncontrollerchange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/oncontrollerchange)
    void oncontrollerchange(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`ServiceWorkerContainer.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`ServiceWorkerContainer.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`ServiceWorkerContainer.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`ServiceWorkerContainer.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind