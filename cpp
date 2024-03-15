class Solution {
    
   public Node sort(Node head){
       if(head==null){
           return null;
       }
        ArrayList<Integer> arr=new ArrayList<>();
        Node current=head;
        while(current!=null){
            arr.add(current.data);
            current=current.next;
        }
        Collections.sort(arr);
        Node dummy=new Node(0);
        Node temp=dummy;
        for(int num:arr){
            temp.next=new Node(num);
            temp=temp.next;
        }
        return dummy.next;
   }


}
