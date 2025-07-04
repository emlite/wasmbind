#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "enums.hpp"

class Clients;
class ServiceWorkerRegistration;
class ServiceWorker;
class CookieStore;


class ServiceWorkerGlobalScope : public WorkerGlobalScope {
    explicit ServiceWorkerGlobalScope(Handle h) noexcept;

public:
    explicit ServiceWorkerGlobalScope(const emlite::Val &val) noexcept;
    static ServiceWorkerGlobalScope take_ownership(Handle h) noexcept;

    ServiceWorkerGlobalScope clone() const noexcept;
    Clients clients() const;
    ServiceWorkerRegistration registration() const;
    ServiceWorker serviceWorker() const;
    jsbind::Promise skipWaiting();
    jsbind::Any oninstall() const;
    void oninstall(const jsbind::Any& value);
    jsbind::Any onactivate() const;
    void onactivate(const jsbind::Any& value);
    jsbind::Any onfetch() const;
    void onfetch(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
    jsbind::Any onbackgroundfetchsuccess() const;
    void onbackgroundfetchsuccess(const jsbind::Any& value);
    jsbind::Any onbackgroundfetchfail() const;
    void onbackgroundfetchfail(const jsbind::Any& value);
    jsbind::Any onbackgroundfetchabort() const;
    void onbackgroundfetchabort(const jsbind::Any& value);
    jsbind::Any onbackgroundfetchclick() const;
    void onbackgroundfetchclick(const jsbind::Any& value);
    jsbind::Any onsync() const;
    void onsync(const jsbind::Any& value);
    jsbind::Any oncontentdelete() const;
    void oncontentdelete(const jsbind::Any& value);
    CookieStore cookieStore() const;
    jsbind::Any oncookiechange() const;
    void oncookiechange(const jsbind::Any& value);
    jsbind::Any onnotificationclick() const;
    void onnotificationclick(const jsbind::Any& value);
    jsbind::Any onnotificationclose() const;
    void onnotificationclose(const jsbind::Any& value);
    jsbind::Any oncanmakepayment() const;
    void oncanmakepayment(const jsbind::Any& value);
    jsbind::Any onpaymentrequest() const;
    void onpaymentrequest(const jsbind::Any& value);
    jsbind::Any onperiodicsync() const;
    void onperiodicsync(const jsbind::Any& value);
    jsbind::Any onpush() const;
    void onpush(const jsbind::Any& value);
    jsbind::Any onpushsubscriptionchange() const;
    void onpushsubscriptionchange(const jsbind::Any& value);
};

