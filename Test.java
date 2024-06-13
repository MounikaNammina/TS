public class Test {
    public static void main(String[] args) {
        File file=new File(args[0]);
        if (!isInSecureDir(file)) {
              throw new IllegalArgumentException();
            }
            String canonicalPath = file.getCanonicalPath();
        if (!canonicalPath.equals("/img/java/file1.txt") &&
            !canonicalPath.equals("/img/java/file2.txt")) {
           // Invalid file; handle error
        }

        FileInputStream fis = new FileInputStream(f);
    }
