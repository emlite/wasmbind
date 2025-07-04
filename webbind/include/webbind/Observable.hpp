#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SubscribeOptions;
class Observable;
class AbortSignal;


class SubscribeOptions : public emlite::Val {
  explicit SubscribeOptions(Handle h) noexcept;
public:
    static SubscribeOptions take_ownership(Handle h) noexcept;
    explicit SubscribeOptions(const emlite::Val &val) noexcept;
    SubscribeOptions() noexcept;
    SubscribeOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Observable : public emlite::Val {
    explicit Observable(Handle h) noexcept;

public:
    explicit Observable(const emlite::Val &val) noexcept;
    static Observable take_ownership(Handle h) noexcept;

    Observable clone() const noexcept;
    Observable(const jsbind::Function& callback);
    jsbind::Undefined subscribe(const jsbind::Any& observer, const SubscribeOptions& options);
    static Observable from(const jsbind::Any& value);
    Observable takeUntil(const jsbind::Any& value);
    Observable map(const jsbind::Function& mapper);
    Observable filter(const jsbind::Function& predicate);
    Observable take(long long amount);
    Observable drop(long long amount);
    Observable flatMap(const jsbind::Function& mapper);
    Observable switchMap(const jsbind::Function& mapper);
    Observable inspect(const jsbind::Any& inspectorUnion);
    Observable catch_(const jsbind::Function& callback);
    Observable finally(const jsbind::Any& callback);
    jsbind::Promise toArray(const SubscribeOptions& options);
    jsbind::Promise forEach(const jsbind::Function& callback, const SubscribeOptions& options);
    jsbind::Promise every(const jsbind::Function& predicate, const SubscribeOptions& options);
    jsbind::Promise first(const SubscribeOptions& options);
    jsbind::Promise last(const SubscribeOptions& options);
    jsbind::Promise find(const jsbind::Function& predicate, const SubscribeOptions& options);
    jsbind::Promise some(const jsbind::Function& predicate, const SubscribeOptions& options);
    jsbind::Promise reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue, const SubscribeOptions& options);
};

