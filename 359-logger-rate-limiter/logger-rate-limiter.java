class Logger {
    HashMap<String,Integer> loggerMap;

    public Logger() {
        loggerMap = new HashMap<>();
    }
    
    public boolean shouldPrintMessage(int timestamp, String message) {
        if(!this.loggerMap.containsKey(message) || timestamp - this.loggerMap.get(message)>=10){
            loggerMap.put(message,timestamp);
            return true;
        }
        return false;
    }
}

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * boolean param_1 = obj.shouldPrintMessage(timestamp,message);
 */