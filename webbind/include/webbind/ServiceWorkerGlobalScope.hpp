#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "enums.hpp"

class Clients;
class ServiceWorkerRegistration;
class ServiceWorker;
class CookieStore;


/// The ServiceWorkerGlobalScope class.
/// [`ServiceWorkerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope)
class ServiceWorkerGlobalScope : public WorkerGlobalScope {
    explicit ServiceWorkerGlobalScope(Handle h) noexcept;

public:
    explicit ServiceWorkerGlobalScope(const emlite::Val &val) noexcept;
    static ServiceWorkerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] ServiceWorkerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `clients` attribute.
    /// [`ServiceWorkerGlobalScope.clients`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/clients)
    [[nodiscard]] Clients clients() const;
    /// Getter of the `registration` attribute.
    /// [`ServiceWorkerGlobalScope.registration`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/registration)
    [[nodiscard]] ServiceWorkerRegistration registration() const;
    /// Getter of the `serviceWorker` attribute.
    /// [`ServiceWorkerGlobalScope.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/serviceWorker)
    [[nodiscard]] ServiceWorker serviceWorker() const;
    /// The skipWaiting method.
    /// [`ServiceWorkerGlobalScope.skipWaiting`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/skipWaiting)
    jsbind::Promise<jsbind::Undefined> skipWaiting();
    /// Getter of the `oninstall` attribute.
    /// [`ServiceWorkerGlobalScope.oninstall`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oninstall)
    [[nodiscard]] jsbind::Any oninstall() const;
    /// Setter of the `oninstall` attribute.
    /// [`ServiceWorkerGlobalScope.oninstall`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oninstall)
    void oninstall(const jsbind::Any& value);
    /// Getter of the `onactivate` attribute.
    /// [`ServiceWorkerGlobalScope.onactivate`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onactivate)
    [[nodiscard]] jsbind::Any onactivate() const;
    /// Setter of the `onactivate` attribute.
    /// [`ServiceWorkerGlobalScope.onactivate`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onactivate)
    void onactivate(const jsbind::Any& value);
    /// Getter of the `onfetch` attribute.
    /// [`ServiceWorkerGlobalScope.onfetch`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onfetch)
    [[nodiscard]] jsbind::Any onfetch() const;
    /// Setter of the `onfetch` attribute.
    /// [`ServiceWorkerGlobalScope.onfetch`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onfetch)
    void onfetch(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`ServiceWorkerGlobalScope.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`ServiceWorkerGlobalScope.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`ServiceWorkerGlobalScope.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`ServiceWorkerGlobalScope.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
    /// Getter of the `onbackgroundfetchsuccess` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchsuccess)
    [[nodiscard]] jsbind::Any onbackgroundfetchsuccess() const;
    /// Setter of the `onbackgroundfetchsuccess` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchsuccess)
    void onbackgroundfetchsuccess(const jsbind::Any& value);
    /// Getter of the `onbackgroundfetchfail` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchfail`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchfail)
    [[nodiscard]] jsbind::Any onbackgroundfetchfail() const;
    /// Setter of the `onbackgroundfetchfail` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchfail`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchfail)
    void onbackgroundfetchfail(const jsbind::Any& value);
    /// Getter of the `onbackgroundfetchabort` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchabort`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchabort)
    [[nodiscard]] jsbind::Any onbackgroundfetchabort() const;
    /// Setter of the `onbackgroundfetchabort` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchabort`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchabort)
    void onbackgroundfetchabort(const jsbind::Any& value);
    /// Getter of the `onbackgroundfetchclick` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchclick`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchclick)
    [[nodiscard]] jsbind::Any onbackgroundfetchclick() const;
    /// Setter of the `onbackgroundfetchclick` attribute.
    /// [`ServiceWorkerGlobalScope.onbackgroundfetchclick`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onbackgroundfetchclick)
    void onbackgroundfetchclick(const jsbind::Any& value);
    /// Getter of the `onsync` attribute.
    /// [`ServiceWorkerGlobalScope.onsync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onsync)
    [[nodiscard]] jsbind::Any onsync() const;
    /// Setter of the `onsync` attribute.
    /// [`ServiceWorkerGlobalScope.onsync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onsync)
    void onsync(const jsbind::Any& value);
    /// Getter of the `oncontentdelete` attribute.
    /// [`ServiceWorkerGlobalScope.oncontentdelete`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncontentdelete)
    [[nodiscard]] jsbind::Any oncontentdelete() const;
    /// Setter of the `oncontentdelete` attribute.
    /// [`ServiceWorkerGlobalScope.oncontentdelete`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncontentdelete)
    void oncontentdelete(const jsbind::Any& value);
    /// Getter of the `cookieStore` attribute.
    /// [`ServiceWorkerGlobalScope.cookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/cookieStore)
    [[nodiscard]] CookieStore cookieStore() const;
    /// Getter of the `oncookiechange` attribute.
    /// [`ServiceWorkerGlobalScope.oncookiechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncookiechange)
    [[nodiscard]] jsbind::Any oncookiechange() const;
    /// Setter of the `oncookiechange` attribute.
    /// [`ServiceWorkerGlobalScope.oncookiechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncookiechange)
    void oncookiechange(const jsbind::Any& value);
    /// Getter of the `onnotificationclick` attribute.
    /// [`ServiceWorkerGlobalScope.onnotificationclick`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onnotificationclick)
    [[nodiscard]] jsbind::Any onnotificationclick() const;
    /// Setter of the `onnotificationclick` attribute.
    /// [`ServiceWorkerGlobalScope.onnotificationclick`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onnotificationclick)
    void onnotificationclick(const jsbind::Any& value);
    /// Getter of the `onnotificationclose` attribute.
    /// [`ServiceWorkerGlobalScope.onnotificationclose`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onnotificationclose)
    [[nodiscard]] jsbind::Any onnotificationclose() const;
    /// Setter of the `onnotificationclose` attribute.
    /// [`ServiceWorkerGlobalScope.onnotificationclose`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onnotificationclose)
    void onnotificationclose(const jsbind::Any& value);
    /// Getter of the `oncanmakepayment` attribute.
    /// [`ServiceWorkerGlobalScope.oncanmakepayment`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncanmakepayment)
    [[nodiscard]] jsbind::Any oncanmakepayment() const;
    /// Setter of the `oncanmakepayment` attribute.
    /// [`ServiceWorkerGlobalScope.oncanmakepayment`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/oncanmakepayment)
    void oncanmakepayment(const jsbind::Any& value);
    /// Getter of the `onpaymentrequest` attribute.
    /// [`ServiceWorkerGlobalScope.onpaymentrequest`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpaymentrequest)
    [[nodiscard]] jsbind::Any onpaymentrequest() const;
    /// Setter of the `onpaymentrequest` attribute.
    /// [`ServiceWorkerGlobalScope.onpaymentrequest`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpaymentrequest)
    void onpaymentrequest(const jsbind::Any& value);
    /// Getter of the `onperiodicsync` attribute.
    /// [`ServiceWorkerGlobalScope.onperiodicsync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onperiodicsync)
    [[nodiscard]] jsbind::Any onperiodicsync() const;
    /// Setter of the `onperiodicsync` attribute.
    /// [`ServiceWorkerGlobalScope.onperiodicsync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onperiodicsync)
    void onperiodicsync(const jsbind::Any& value);
    /// Getter of the `onpush` attribute.
    /// [`ServiceWorkerGlobalScope.onpush`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpush)
    [[nodiscard]] jsbind::Any onpush() const;
    /// Setter of the `onpush` attribute.
    /// [`ServiceWorkerGlobalScope.onpush`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpush)
    void onpush(const jsbind::Any& value);
    /// Getter of the `onpushsubscriptionchange` attribute.
    /// [`ServiceWorkerGlobalScope.onpushsubscriptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpushsubscriptionchange)
    [[nodiscard]] jsbind::Any onpushsubscriptionchange() const;
    /// Setter of the `onpushsubscriptionchange` attribute.
    /// [`ServiceWorkerGlobalScope.onpushsubscriptionchange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope/onpushsubscriptionchange)
    void onpushsubscriptionchange(const jsbind::Any& value);
};

