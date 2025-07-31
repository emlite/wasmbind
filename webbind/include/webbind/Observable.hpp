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
    [[nodiscard]] SubscribeOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The Observable class.
/// [`Observable`](https://developer.mozilla.org/en-US/docs/Web/API/Observable)
class Observable : public emlite::Val {
    explicit Observable(Handle h) noexcept;

public:
    explicit Observable(const emlite::Val &val) noexcept;
    static Observable take_ownership(Handle h) noexcept;

    [[nodiscard]] Observable clone() const noexcept;
    /// The `new Observable(..)` constructor, creating a new Observable instance
    Observable(const jsbind::Function& callback);
    /// The subscribe method.
    /// [`Observable.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/subscribe)
    jsbind::Undefined subscribe();
    /// The subscribe method.
    /// [`Observable.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/subscribe)
    jsbind::Undefined subscribe(const jsbind::Any& observer);
    /// The subscribe method.
    /// [`Observable.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/subscribe)
    jsbind::Undefined subscribe(const jsbind::Any& observer, const SubscribeOptions& options);
    /// The from method.
    /// [`Observable.from`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/from)
    static Observable from(const jsbind::Any& value);
    /// The takeUntil method.
    /// [`Observable.takeUntil`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/takeUntil)
    Observable takeUntil(const jsbind::Any& value);
    /// The map method.
    /// [`Observable.map`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/map)
    Observable map(const jsbind::Function& mapper);
    /// The filter method.
    /// [`Observable.filter`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/filter)
    Observable filter(const jsbind::Function& predicate);
    /// The take method.
    /// [`Observable.take`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/take)
    Observable take(long long amount);
    /// The drop method.
    /// [`Observable.drop`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/drop)
    Observable drop(long long amount);
    /// The flatMap method.
    /// [`Observable.flatMap`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/flatMap)
    Observable flatMap(const jsbind::Function& mapper);
    /// The switchMap method.
    /// [`Observable.switchMap`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/switchMap)
    Observable switchMap(const jsbind::Function& mapper);
    /// The inspect method.
    /// [`Observable.inspect`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/inspect)
    Observable inspect();
    /// The inspect method.
    /// [`Observable.inspect`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/inspect)
    Observable inspect(const jsbind::Any& inspectorUnion);
    /// The catch method.
    /// [`Observable.catch`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/catch)
    Observable catch_(const jsbind::Function& callback);
    /// The finally method.
    /// [`Observable.finally`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/finally)
    Observable finally(const jsbind::Any& callback);
    /// The toArray method.
    /// [`Observable.toArray`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/toArray)
    jsbind::Promise<jsbind::TypedArray<jsbind::Any>> toArray();
    /// The toArray method.
    /// [`Observable.toArray`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/toArray)
    jsbind::Promise<jsbind::TypedArray<jsbind::Any>> toArray(const SubscribeOptions& options);
    /// The forEach method.
    /// [`Observable.forEach`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/forEach)
    jsbind::Promise<jsbind::Undefined> forEach(const jsbind::Function& callback);
    /// The forEach method.
    /// [`Observable.forEach`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/forEach)
    jsbind::Promise<jsbind::Undefined> forEach(const jsbind::Function& callback, const SubscribeOptions& options);
    /// The every method.
    /// [`Observable.every`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/every)
    jsbind::Promise<bool> every(const jsbind::Function& predicate);
    /// The every method.
    /// [`Observable.every`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/every)
    jsbind::Promise<bool> every(const jsbind::Function& predicate, const SubscribeOptions& options);
    /// The first method.
    /// [`Observable.first`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/first)
    jsbind::Promise<jsbind::Any> first();
    /// The first method.
    /// [`Observable.first`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/first)
    jsbind::Promise<jsbind::Any> first(const SubscribeOptions& options);
    /// The last method.
    /// [`Observable.last`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/last)
    jsbind::Promise<jsbind::Any> last();
    /// The last method.
    /// [`Observable.last`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/last)
    jsbind::Promise<jsbind::Any> last(const SubscribeOptions& options);
    /// The find method.
    /// [`Observable.find`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/find)
    jsbind::Promise<jsbind::Any> find(const jsbind::Function& predicate);
    /// The find method.
    /// [`Observable.find`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/find)
    jsbind::Promise<jsbind::Any> find(const jsbind::Function& predicate, const SubscribeOptions& options);
    /// The some method.
    /// [`Observable.some`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/some)
    jsbind::Promise<bool> some(const jsbind::Function& predicate);
    /// The some method.
    /// [`Observable.some`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/some)
    jsbind::Promise<bool> some(const jsbind::Function& predicate, const SubscribeOptions& options);
    /// The reduce method.
    /// [`Observable.reduce`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/reduce)
    jsbind::Promise<jsbind::Any> reduce(const jsbind::Function& reducer);
    /// The reduce method.
    /// [`Observable.reduce`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/reduce)
    jsbind::Promise<jsbind::Any> reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue);
    /// The reduce method.
    /// [`Observable.reduce`](https://developer.mozilla.org/en-US/docs/Web/API/Observable/reduce)
    jsbind::Promise<jsbind::Any> reduce(const jsbind::Function& reducer, const jsbind::Any& initialValue, const SubscribeOptions& options);
};

