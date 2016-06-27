producer:
event = waitForEvent()
mutex.wait()
    buffer.add(event)
    items.signal()
mutex.signal
